#pragma once
#include <iostream>

class rectangle
{
private:
	int width;
	int height;
	std::string* color;

public:
	rectangle() :width{ 5 }, height{ 6 }
	{
		std::cout << "생성자 호출" << std::endl;
	}
	rectangle(int w, int h, std::string c) :width{ w }, height{ h }
	{
		color = new std::string;
		*color = c;
	}
	~rectangle()
	{
		delete color;
		std::cout << "소멸자 호출" << std::endl;
	}

	void setRect(int w, int h);
	void print();
	int getWidth();
	int getHeight();
	int calArea();
};