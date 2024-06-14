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
		std::cout << "������ ������ �����ϴ�." << std::endl;
	else
	{
		std::cout << "������ ��ȣ: " << LabNum << std::endl;
		std::cout << "������ �̸�: " << *name << std::endl;
		std::cout.setf(std::ios_base::boolalpha);
		std::cout << "���� ����: " << hasChief << std::endl;
		std::cout << "������ �ο�: " << num << std::endl;
		std::cout << "������ �л�: " << std::endl;
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
	std::cout << *name << " ������ �ο��� �� ����." << std::endl;
}

void applyLab(Labs& lab, int n)
{
	std::cout << "�л� ������ �Է�/�߰��Ͻÿ�" << std::endl;
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
	Labs lab{ "��ȣó�� ������", false, 1 };
	return lab;
}
