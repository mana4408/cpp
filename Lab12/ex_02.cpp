#include <iostream>

using namespace std;

class Base
{
protected:
	int age;
	string job;
public:
	Base(int age = 0, string job = " ") :age{ age }, job{ job } {}

	void eat()
	{
		cout << "���� �� ����" << endl;
	}
	void talk()
	{
		cout << "���� �� ����" << endl;
	}
	void run()
	{
		cout << "�� �� ����" << endl;
	}
	void print() const
	{
		cout << "���� ����: " << job << endl;
		cout << "���� ����: " << age << endl;
	}
};

class Professor :public Base
{
public:
	Professor(int age, string job = "����") :Base(age, job) {}
	void teach()
	{
		cout << "����ĥ �� ����" << endl;
	}
	void print()
	{
		Base::print();
		Base::run();
		Base::talk();
		teach();
	}
};

class TennisPlayer :public Base
{
public:
	TennisPlayer(int age, string job = "�״Ͻ�����") :Base(age, job) {}
	void playTennis()
	{
		cout << "�״Ͻ� ��⸦ �� �� ����" << endl;
	}
	void print()
	{
		Base::print();
		Base::run();
		Base::talk();
		playTennis();
	}
};

class Businessman :public Base
{
public:
	Businessman(int age, string job = "��ǥ") :Base(age, job) {}
	void runBusinessman()
	{
		cout << "����� ��� �� ����" << endl;
	}
	void print()
	{
		Base::print();
		Base::run();
		Base::talk();
		runBusinessman();
	}
};



int main()
{
	Professor prof(38);
	prof.print();

	cout << "-------------------------" << endl;

	TennisPlayer player(23);
	player.print();

	cout << "-------------------------" << endl;

	Businessman man(45);
	man.print();

	return 0;
}
