#include "rectangle.h"
#include <iostream>

void rectangle::setRect(int w, int h)
{
	width = w;
	height = h;
}
void rectangle::print()
{
	std::cout << width << " " << height << " " << *color << std::endl;
}
int rectangle::getWidth()
{
	return width;
}
int rectangle::getHeight()
{
	return height;
}
int rectangle::calArea()
{
	return height * width;
}