// p.514, 2번 문제
#include <iostream>
using namespace std;

class Weapon
{
public:
	virtual void load() = 0;
};

class Bomb : public Weapon
{
public:
	Bomb() {}
	void load()
	{
		cout << "폭탄을 적재합니다." << endl;
	}
};

class Gun : public Weapon
{
public:
	Gun() {}
	void load()
	{
		cout << "총을 적재합니다." << endl;
	}
};

int main()
{
	Weapon* w[]{ new Gun, new Bomb, new Bomb };

	for (Weapon* i : w)
		i->load();

	for (Weapon* i: w)
		delete i;
	return 0;
}