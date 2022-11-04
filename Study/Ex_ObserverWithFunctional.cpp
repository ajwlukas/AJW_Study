#include "Ex_ObserverWithFunctional.h"

#include <Windows.h>
#include <iostream>
#include <functional>
#include <vector>

#include "AjwCommon\Input.h"

using namespace std;

class ResizeNotice
{
public:
	using ResizeFunc = function<void(UINT, UINT)>;

	void AddEvent(ResizeFunc func)
	{
		observers.push_back(func);
	}

	void SubObserver(ResizeFunc func) = delete;//핸들을 주던가 하는 방법밖에 없는 듯..?

	void OccurEvent()
	{
		for (auto obs : observers)
			obs(16,246);
	}

private:
	UINT width, height;

	vector<ResizeFunc> observers;
};

class RenderTarget
{
public:
	RenderTarget(ResizeNotice* notice)
	{
		function<void(UINT, UINT)> a = std::bind(&RenderTarget::OnResize, this, std::placeholders::_1, std::placeholders::_2);
		notice->AddEvent(a);
	}

	void OnResize(UINT widht, UINT height)
	{
		this->widht = widht;
		this->height = height;

		cout << "렌더타겟 조절 됐음" << this->widht << "\t" << this->height << "\n";
	}

private:
	UINT widht;
	UINT height;
};

class Camera
{
public:
	Camera(ResizeNotice* notice)
	{
		function<void(UINT, UINT)> a = std::bind(&Camera::OnResize, this, std::placeholders::_1, std::placeholders::_2);
		notice->AddEvent(a);
	}

	void OnResize(UINT widht, UINT height)
	{
		this->widht = widht;
		this->height = height;

		cout << "카메라 조절 됐음" << this->widht << "\t" << this->height << "\n";
	}

private:
	UINT widht;
	UINT height;
};

void Test(UINT a, UINT b)
{
	cout << "테스트" << a << "\t" << b << "\n";
}

void Ex_ObserverWithFunctional::main()
{
	ResizeNotice notice;

	RenderTarget* rt = new RenderTarget(&notice);
	Camera* cam = new Camera(&notice);
	
	ajwCommon::Input* input = new ajwCommon::Input();

	/*notice.AddEvent([](UINT a, UINT b) { cout << a << b << endl; });
	notice.AddEvent(Test);*/

	//notice.OccurEvent();


	while (true)
	{
		input->Update();


		if(input->Down(VK_SPACE))
			notice.OccurEvent();

	}

	delete cam;
	delete rt;

	delete input;
}
