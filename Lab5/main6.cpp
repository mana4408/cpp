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
		cout << "���� ���߽��ϴ�." << endl;
		p.hp /= 4;
		p.cash /= 4;
	}
	else
		cout << "���� ������ �ʾҽ��ϴ�." << endl;
	cout << "player�� ���� ����" << endl;
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