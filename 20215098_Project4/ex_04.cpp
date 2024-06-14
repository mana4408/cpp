// p.476, 3�� ����
#include <iostream>
using namespace std;

class Weapon
{
private:
	string name;
	int salary;
public:
	Weapon() {}
	Weapon(string n, int s) :name{ n }, salary{ s }{}
	string getName() const
	{
		return name;
	}
	void setName(const string& name)
	{
		this->name = name;
	}
	int getSalary() const
	{
		return salary;
	}
	void setSalary(const int& salary)
	{
		this->salary = salary;
	}
	virtual int computeSalary() const
	{
		return salary;
	}
};

class Bomb : public Weapon
{
private:
	int bonus;
public:
	Bomb() {}
	Bomb(string n, int s, int b) :Weapon(n, s), bonus{ b }{}
	int getBonus() const
	{
		return bonus;
	}
	void setBonus(const int& bonus)
	{
		this->bonus = bonus;
	}
	int computeSalary() const override
	{
		return getSalary() + bonus;
	}
};

int main()
{
	Bomb s1{ "��ö��", 200, 100 };
	
	cout << "�̸�: " << s1.getName() << endl;
	cout << "����: " << s1.getSalary() << endl;
	cout << "���ʽ�: " << s1.getBonus() << endl;
	cout << "��ü �޿�: " << s1.computeSalary() << endl;

	return 0;
}