#include <iostream>

using namespace std;

struct Player
{
	int hp;
	int cash;
};

int main()
{
	Player player;
	Player* ptr = &player;
	Player& ref = player;

	ptr->hp = 200;
	ptr->cash = 1000;
	cout << "player�� ���� ü�°� ��" << endl;
	cout << player.hp << " " << player.cash << endl;

	ref.hp = 100;
	ref.cash = 500;
	cout << "player�� ���� ü�°� ��" << endl;
	cout << player.hp << " " << player.cash << endl;

	return 0;
}