#include <iostream>

class Box
{
private:
	int height;
	int width;
	char ch;

public:
	Box(int h = 3, int w = 3, char c = '*')
		:height{ h }, width{ w }, ch{ c }{}

	void setBox(int h, int w, char c);

	void draw();
};