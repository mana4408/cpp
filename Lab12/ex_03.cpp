#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "�θ� ������" << endl;
	}
	virtual ~Base() // �����Լ�
	{
		cout << "�θ� �Ҹ���" << endl;
	}

	virtual void func()
	{
		cout << "�θ� �Լ�" << endl;
	}
};

class Derived :public Base
{
public:
	Derived()
	{
		cout << "�ڽ� ������" << endl;
	}
	~Derived()
	{
		cout << "�ڽ� �Ҹ���" << endl;
	}

	virtual void func() override
	{
		cout << "�ڽ� �Լ�" << endl;
	}
};

int main()
{
	// �θ� ������� ��, �ڽ��� ����
	Base* base = new Derived; // �θ� -> �ڽ�
	base->func();

	Derived d;
	Base& base2 = d;
	base2.func();

	delete base; // �ڽ� -> �θ�
	// base2�� �� ���൵ virtual ������ ���� �Ҹ�
	// ������ ������ Ÿ�Ը� ���� �θ� ��ü�� �Ҹ�

	return 0;
}