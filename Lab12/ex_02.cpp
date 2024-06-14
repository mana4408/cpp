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
		cout << "먹을 수 있음" << endl;
	}
	void talk()
	{
		cout << "말할 수 있음" << endl;
	}
	void run()
	{
		cout << "뛸 수 있음" << endl;
	}
	void print() const
	{
		cout << "나의 직업: " << job << endl;
		cout << "나의 나이: " << age << endl;
	}
};

class Professor :public Base
{
public:
	Professor(int age, string job = "교수") :Base(age, job) {}
	void teach()
	{
		cout << "가르칠 수 있음" << endl;
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
	TennisPlayer(int age, string job = "테니스선수") :Base(age, job) {}
	void playTennis()
	{
		cout << "테니스 경기를 할 수 있음" << endl;
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
	Businessman(int age, string job = "대표") :Base(age, job) {}
	void runBusinessman()
	{
		cout << "사업을 운영할 수 있음" << endl;
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
