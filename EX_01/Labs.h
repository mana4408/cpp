#pragma once
#include <iostream>
#include <vector>

class Student
{
private:
	std::string name;
	std::string tel;
public:
	Student(std::string n = " ", std::string t = " ");
	void print();
};

class Labs
{
private:
	std::string* name;
	bool hasChief;
	int num;
	static int LabNum;
	std::vector<Student> students;
public:
	Labs();
	Labs(std::string name, bool hasChief, int num);
	void addStudent(int n);
	void print();
	int getNumber();
	Labs& checkNumber(Labs& lab);
	void moreNumber();
	void setStudent(Student st);
};

void applyLab(Labs& lab, int n);
Labs& createLab();

