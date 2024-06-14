#include <iostream>

using namespace std;

struct Player
{
	int hp;
	int cash;
};

void damagePlayer(Player& p, bool b)
{
	if (b) {
		cout << "공격 당했습니다." << endl;
		p.hp /= 2;
		p.cash /= 2;
	}
	else
		cout << "공격 당하지 않았습니다." << endl;
	cout << "player의 현재 상태" << endl;
	cout << p.hp << " " << p.cash << endl;
}

int main()
{
	Player* ptr = new Player{ 100,1000 };
	bool att = true;

	cout << "player의 초기 상태" << endl;
	cout << ptr->hp << " " << ptr->cash << endl;

	cout << endl << "공격을 당했습니다." << endl;
	damagePlayer(*ptr, att);

	cout << endl << "공격을 당하지 않았습니다." << endl;
	att = false;
	damagePlayer(*ptr, att);

	delete ptr;
	return 0;
}