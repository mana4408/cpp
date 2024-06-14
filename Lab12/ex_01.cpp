#include <iostream>

using namespace std;

class Base
{
protected:
	string name;
public:
	Base(string name = " ") :name{ name }
	{
		cout << "animal 积己磊" << endl;
	}
	~Base()
	{
		cout << "animal 家戈磊" << endl;
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
		cout << "cat 积己磊" << endl;
	}
	~Professor()
	{
		cout << "cat 家戈磊" << endl;
	}
	void speak()
	{
		Base::name = "??";
		Base::speak();
		cout << "成" << endl;
	}
};

class Dog:public Base
{
public:
	Dog(string name) :Base(name)
	{
		cout << "dog 积己磊" << endl;
	}
	~Dog()
	{
		cout << "dog 家戈磊" << endl;
	}
	void speak()
	{
		Base::speak();
		cout << "港" << endl;
	}
};

int main()
{
	Base animal;
	Professor cat("唱厚");
	Dog dog("闰嫡捞");

	animal.speak();

	cout << cat.getName() << " ";
	cat.speak();

	cout << dog.getName() << " ";
	dog.speak();

	return 0;
}
