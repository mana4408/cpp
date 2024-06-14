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
		std::cout << "������ ȣ��" << std::endl;
	}
	rectangle(int w, int h, std::string c) :width{ w }, height{ h }
	{
		color = new std::string;
		*color = c;
	}
	~rectangle()
	{
		delete color;
		std::cout << "�Ҹ��� ȣ��" << std::endl;
	}

	void setRect(int w, int h);
	void print();
	int getWidth();
	int getHeight();
	int calArea();
};