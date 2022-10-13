#include "Box.h"

void Box::setBox(int h, int w, char c)
{
	height = h;
	width = w;
	ch = c;
}

void Box::draw()
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			std::cout << ch;
		std::cout << std::endl;
	}
}
