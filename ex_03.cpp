// p.470, student 클래스 작성
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
		cout << "성명: " << name << endl;
		cout << "출생연도: " << salary << endl;
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
		cout << "대학교: " << university << endl;
	}
};

int main()
{
	Bomb s1{ "홍길동", 1997, "한국대학교" };
	s1.print();
	return 0;
}