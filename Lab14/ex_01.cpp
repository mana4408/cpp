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
			cout << "답은 " << bottom << "과 " << top << "사이에 있습니다." << endl;
		}
		return false;
	}
	void run()
	{
		srand((unsigned)time(0)); // 항상 다른 랜덤수를 발생시키기 위한 seed 설정
		int n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수가 n에 발생
		n = n % 10; // n은 0~10 사이의 정수
		answer = n;
		cout << "정답은: " << answer << endl;

		int index = 0;
		while (true)
		{
			try
			{
				if (check(players[index].go())) 
				{
					cout << players[index].getName() << "님이 승리하였습니다." << endl;
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
	// 2명의 Player에 대한 정적 객체 배열 정의
	Player player[] = {Player("김철수"),Player("이영희")};
	UpAndDownGame game(player);
	game.run();
}
