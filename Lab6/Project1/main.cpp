#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

int main()
{
	rectangle rect0{ 5,5,"red" };
	rect0.print();
	//Rectangle* rect1 = new Rectangle;
	//delete rect1; // ���ÿ� ���� ������� �Ҹ�Ǳ� ������ ���� �Լ��� �ִ� �����Ҵ� �޸𸮰� ���� �Ҹ�ǰ�, �Ŀ� ������ ��ü���� �Ҹ��.
}