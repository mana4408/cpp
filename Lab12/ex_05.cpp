#include <iostream>

using namespace std; 

class Shape // �θ�, �߻�Ŭ����
{
public:
	virtual double getArea() = 0; // ���� ���� �Լ�
};

class Circle :public Shape
{
private:
	int radius;
public:
	Circle(int r) :radius{ r } {}
	// �� ��������� ��
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
	// �� ��������� ��
	virtual double getArea() override
	{
		return height * width;
	}
};

int main()
{
	// Shape shape; // �߻�Ŭ������ ��ü ���� x
	Circle c(10);
	cout << c.getArea() << endl;

	Rectangle r(10, 10);
	cout << r.getArea() << endl;
}