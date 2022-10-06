#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

int main()
{
	rectangle rect0{ 5,5,"red" };
	rect0.print();
	//Rectangle* rect1 = new Rectangle;
	//delete rect1; // 스택에 쌓인 순서대로 소멸되기 때문에 메인 함수에 있는 동적할당 메모리가 먼저 소멸되고, 후에 나머지 객체들이 소멸됨.
}