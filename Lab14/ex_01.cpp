#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

class Player
{
private:
	string name;
public:
	Player() {}
	Player(string n) :name{ n } {}
	string getName() const
	{
		return name;
	}
	int go()
	{
		int num;
		cout << name << ": ";
		cin >> num;
		return num;
	}
};

class UpAndDownGame
{
private:
	static int top;
	static int bottom;
	static int answer;
	Player* players;
public:
	UpAndDownGame() {}
	UpAndDownGame(Player p[]) : players{ new Player[2]} 
	{
		players[0] = p[0];
		players[1] = p[1];
	}
	~UpAndDownGame()
	{
		delete[] players;
	}
	bool check(const int& a) const
	{
		if (a == answer) 
			return true;
		if (a > top || a < bottom)
			throw "out of range";
		else {
			if (a > answer)
				top = a;
			else
				bottom = a;
			cout << "���� " << bottom << "�� " << top << "���̿� �ֽ��ϴ�." << endl;
		}
		return false;
	}
	void run()
	{
		srand((unsigned)time(0)); // �׻� �ٸ� �������� �߻���Ű�� ���� seed ����
		int n = rand(); // 0���� RAND_MAX(32767) ������ ������ ������ n�� �߻�
		n = n % 10; // n�� 0~10 ������ ����
		answer = n;
		cout << "������: " << answer << endl;

		int index = 0;
		while (true)
		{
			try
			{
				if (check(players[index].go())) 
				{
					cout << players[index].getName() << "���� �¸��Ͽ����ϴ�." << endl;
					break;
				}
				cout << endl;
				++index;
				index %= 2;
			}
			catch (const char* e)
			{
				cout << e << endl;
			}
		}
	}
};
int UpAndDownGame::top = 10;
int UpAndDownGame::bottom = 0;
int UpAndDownGame::answer = 0;



int main()
{
	// 2���� Player�� ���� ���� ��ü �迭 ����
	Player player[] = {Player("��ö��"),Player("�̿���")};
	UpAndDownGame game(player);
	game.run();
}
