#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s[]{ "espresso","americano","cappuccino" };
	int n[]{ 2000,2500,3000 };
	string s1, text;
	char ch;
	int price, sum = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2500��, īǪġ�� 3000��" << endl;
	do
	{
		text.clear();
		cout << "�ֹ�: ";
		getline(cin, s1);

		for (int i = 0; i < s1.find('_'); i++)
			text += s1.at(i);

		for (int i = 0; i < 3; i++)
			if (text == s[i])
				price = (s1.at(s1.find('_') + 1) - '0') * n[i];

		sum += price;

		cout << s1 << "�� �� �ݾ��� " << price << "�Դϴ�." << endl;
		cout << "���� ������ " << sum << "�Դϴ�." << endl;
	} while (sum <= 30000);

	return 0;
}