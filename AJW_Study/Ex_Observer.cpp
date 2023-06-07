#include "Ex_Observer.h"

#include <iostream>
#include <vector>

using namespace std;

class Observer
{
	friend class Notice;
protected:
	virtual void Event() = 0;
};


class Notice
{
public:
	void AddObserver(Observer* observer)
	{
		observers.push_back(observer);
	}

	void SubObserver(Observer* observer)
	{
		observers.erase( find(observers.begin(), observers.end(), observer));
	}

	void OccurEvent()
	{
		for (Observer* ob : observers)
			ob->Event();

	}

private:
	vector<Observer*> observers;
};

class Rabbit : public Observer
{
	// Observer��(��) ���� ��ӵ�
	virtual void Event() override
	{
		cout << "���ѱ���" << endl;
	}
};

class Dog : public Observer
{
	// Observer��(��) ���� ��ӵ�
	virtual void Event() override
	{
		cout << "�۸�" << endl;
	}
};


void Ex_Observer::main()
{
	Notice notice;

	Rabbit rabbit;
	Dog dog;

	notice.AddObserver(&rabbit);
	notice.AddObserver(&dog);

	notice.OccurEvent();
}
