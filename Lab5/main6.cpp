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
		p.hp /= 4;
		p.cash /= 4;
	}
	else
		cout << "공격 당하지 않았습니다." << endl;
	cout << "player의 현재 상태" << endl;
	cout << p.hp << " " << p.cash << endl;
}

int main()
{
	Player* ptr = new Player{ 100,1000 };
	int attack = 1;
	int status = 0;

	while (ptr->hp > 0)
	{
		if(status)
			damagePlayer(*ptr, status);
		else	
			damagePlayer(*ptr, status);
		status ^= attack;
	}
	
	

	delete ptr;
	return 0;
}