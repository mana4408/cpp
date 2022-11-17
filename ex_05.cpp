#include <iostream>

using namespace std; 

class Shape // 부모, 추상클래스
{
public:
	virtual double getArea() = 0; // 순수 가상 함수
};

class Circle :public Shape
{
private:
	int radius;
public:
	Circle(int r) :radius{ r } {}
	// 꼭 구현해줘야 함
	virtual double getArea() override
	{
		return radius * radius * 3.14;
	}
};

class Rectangle :public Shape
{
private:
	int height;
	int width;
public:
	Rectangle(int h, int w) :height{ h }, width{ w }{}
	// 꼭 구현해줘야 함
	virtual double getArea() override
	{
		return height * width;
	}
};

int main()
{
	// Shape shape; // 추상클래스는 객체 생성 x
	Circle c(10);
	cout << c.getArea() << endl;

	Rectangle r(10, 10);
	cout << r.getArea() << endl;
}