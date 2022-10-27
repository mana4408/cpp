#include "Labs.h"

Student::Student(std::string n, std::string t) :name{ n }, tel{ t }{}

void Student::print()
{
	std::cout << "(" << name << "," << tel << ")" << std::endl;
}

int Labs::LabNum = 0;

Labs::Labs() :name{ nullptr }, hasChief{ 0 }, num{ 0 }{}

Labs::Labs(std::string name, bool hasChief, int num)
{
	this->name = new std::string{ name };
	this->hasChief = hasChief;
	this->num = num;
	LabNum++;
}

void Labs::addStudent(int n)
{
	num += n;
}

void Labs::print()
{
	if (name == nullptr)
		std::cout << "연구실 정보가 없습니다." << std::endl;
	else
	{
		std::cout << "연구실 번호: " << LabNum << std::endl;
		std::cout << "연구실 이름: " << *name << std::endl;
		std::cout.setf(std::ios_base::boolalpha);
		std::cout << "실장 여부: " << hasChief << std::endl;
		std::cout << "연구실 인원: " << num << std::endl;
		std::cout << "연구실 학생: " << std::endl;
		for (Student st : students)
			st.print();
	}
}

void Labs::setStudent(Student st)
{
	students.push_back(st);
}

 int Labs::getNumber()
{
	return num;
}

Labs& Labs::checkNumber(Labs& lab)
{
	return (this->num > lab.getNumber()) ? *this : lab;
}

void Labs::moreNumber()
{
	std::cout << *name << " 연구실 인원이 더 많다." << std::endl;
}

void applyLab(Labs& lab, int n)
{
	std::cout << "학생 정보를 입력/추가하시오" << std::endl;
	for (int i = 0; i < n; i++) {
		std::string name, tel;
		std::cin >> name >> tel;
		Student* st = new Student{ name, tel };
		lab.setStudent(*st);
	}
	lab.addStudent(n);
}

Labs& createLab()
{
	Labs lab{ "신호처리 연구실", false, 1 };
	return lab;
}
