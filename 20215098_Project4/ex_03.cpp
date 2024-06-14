// p.470, student Ŭ���� �ۼ�
#include <iostream>
using namespace std;

class Weapon
{
private:
	int salary;
	string name;
public:
	Weapon(){}
	Weapon(string n, int b) :name{ n }, salary{ b }{}
	void computeSalary()
	{
		cout << "����: " << name << endl;
		cout << "�������: " << salary << endl;
	}
};

class Bomb : public Weapon
{
private:
	string university;
public:
	Bomb(){}
	Bomb(string n, int b, string u) :Weapon(n, b), university{ u }{}
	void print()
	{
		Weapon::computeSalary();
		cout << "���б�: " << university << endl;
	}
};

int main()
{
	Bomb s1{ "ȫ�浿", 1997, "�ѱ����б�" };
	s1.print();
	return 0;
}