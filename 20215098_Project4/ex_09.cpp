// p.592, 7번 문제
#include <iostream>
using namespace std;

template <typename T>
class Circle
{
private:
	T x, y, r;
public:
	Circle(){}
	Circle(T x, T y, T r) :x{ x }, y{ y }, r{ r }{}
	T area()
	{
		return r * r * 3.14;
	}
};

int main()
{
	Circle<double> circleA{ 0.0,0.0,10.0 };
	cout << "면적: " << circleA.area() << endl;
	return 0;
}