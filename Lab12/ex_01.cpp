#include <iostream>

using namespace std;

class Base
{
protected:
	string name;
public:
	Base(string name = " ") :name{ name }
	{
		cout << "animal ������" << endl;
	}
	~Base()
	{
		cout << "animal �Ҹ���" << endl;
	}
	string getName()
	{
		return name;
	}
	void speak()
	{
		cout << "???" << endl;
	}
};

class Professor:public Base
{
public:
	Professor(string name) :Base(name)
	{
		cout << "cat ������" << endl;
	}
	~Professor()
	{
		cout << "cat �Ҹ���" << endl;
	}
	void speak()
	{
		Base::name = "??";
		Base::speak();
		cout << "��" << endl;
	}
};

class Dog:public Base
{
public:
	Dog(string name) :Base(name)
	{
		cout << "dog ������" << endl;
	}
	~Dog()
	{
		cout << "dog �Ҹ���" << endl;
	}
	void speak()
	{
		Base::speak();
		cout << "��" << endl;
	}
};

int main()
{
	Base animal;
	Professor cat("����");
	Dog dog("�����");

	animal.speak();

	cout << cat.getName() << " ";
	cat.speak();

	cout << dog.getName() << " ";
	dog.speak();

	return 0;
}
