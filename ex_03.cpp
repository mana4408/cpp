#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "부모 생성자" << endl;
	}
	virtual ~Base() // 가상함수
	{
		cout << "부모 소멸자" << endl;
	}

	virtual void func()
	{
		cout << "부모 함수" << endl;
	}
};

class Derived :public Base
{
public:
	Derived()
	{
		cout << "자식 생성자" << endl;
	}
	~Derived()
	{
		cout << "자식 소멸자" << endl;
	}

	virtual void func() override
	{
		cout << "자식 함수" << endl;
	}
};

int main()
{
	// 부모가 만들어진 후, 자식이 생성
	Base* base = new Derived; // 부모 -> 자식
	base->func();

	Derived d;
	Base& base2 = d;
	base2.func();

	delete base; // 자식 -> 부모
	// base2를 안 써줘도 virtual 때문에 같이 소멸
	// 원래는 포인터 타입만 보고 부모 객체만 소멸

	return 0;
}