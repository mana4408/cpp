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
		p.hp /= 2;
		p.cash /= 2;
	}
	else
		cout << "���� ������ �ʾҽ��ϴ�." << endl;
	cout << "player�� ���� ����" << endl;
	cout << p.hp << " " << p.cash << endl;
}

int main()
{
	Player* ptr = new Player{ 100,1000 };
	bool att = true;

	cout << "player�� �ʱ� ����" << endl;
	cout << ptr->hp << " " << ptr->cash << endl;

	cout << endl << "������ ���߽��ϴ�." << endl;
	damagePlayer(*ptr, att);

	cout << endl << "������ ������ �ʾҽ��ϴ�." << endl;
	att = false;
	damagePlayer(*ptr, att);

	delete ptr;
	return 0;
}