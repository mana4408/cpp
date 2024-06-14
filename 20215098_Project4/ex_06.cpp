// p.514, 2�� ����
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
		cout << "��ź�� �����մϴ�." << endl;
	}
};

class Gun : public Weapon
{
public:
	Gun() {}
	void load()
	{
		cout << "���� �����մϴ�." << endl;
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