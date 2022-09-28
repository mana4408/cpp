#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// p.115, 1번 문제
	string s1, s2;
	cout << "첫 번째 문자열: ";
	cin >> s1;
	cout << "두 번째 문자열: ";
	cin >> s2;
	
	if(s1==s2)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;
	

	// p.117, 10번 문제
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++) 
				if (a * a + b * b == c * c)
					cout << a << " " << b << " " << c << endl;
			
	
	// p.120, 16번 문제
	int cash = 50, goal = 250, bets = 0, wins = 0;

	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;

	for (int i = 0; i < 1000; i++)
	{
		cash = 50;
		while (cash > 0 && cash < goal)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5) {
				cash++;
			}
			else cash--;
		}
		if (cash == goal)	wins++;
	}
	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << bets / 1000.0 << endl;



	return 0;
}