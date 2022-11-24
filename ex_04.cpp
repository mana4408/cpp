// p.476, 3번 문제
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
	Bomb s1{ "김철수", 200, 100 };
	
	cout << "이름: " << s1.getName() << endl;
	cout << "월급: " << s1.getSalary() << endl;
	cout << "보너스: " << s1.getBonus() << endl;
	cout << "전체 급여: " << s1.computeSalary() << endl;

	return 0;
}