#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// p.115, 1�� ����
	string s1, s2;
	cout << "ù ��° ���ڿ�: ";
	cin >> s1;
	cout << "�� ��° ���ڿ�: ";
	cin >> s2;
	
	if(s1==s2)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	

	// p.117, 10�� ����
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++) 
				if (a * a + b * b == c * c)
					cout << a << " " << b << " " << c << endl;
			
	
	// p.120, 16�� ����
	int cash = 50, goal = 250, bets = 0, wins = 0;

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;

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
	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << bets / 1000.0 << endl;



	return 0;
}