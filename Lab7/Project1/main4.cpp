#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s[]{"espresso","americano","cappuccino"};
	int n[]{ 2000,2500,3000 };
	string s1;
	char ch;
	int price, sum = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2500��, īǪġ�� 3000��" << endl;
	do
	{
		cout << "�ֹ�: ";
		getline(cin, s1, '_');
		cin >> ch;

		for (int i = 0; i < 3; i++)
			if (s1 == s[i])
				price = (ch-'0') * n[i];
		sum += price;

		cout << s1 << "�� �� �ݾ��� " << price << "�Դϴ�." << endl;
		cout << "���� ������ " << sum << "�Դϴ�." << endl;
		cin.ignore();
	} while (sum<=30000);

	return 0;
}