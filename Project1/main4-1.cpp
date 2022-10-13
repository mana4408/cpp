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

	cout << "에스프레소 2000원, 아메리카노 2500원, 카푸치노 3000원" << endl;
	do
	{
		text.clear();
		cout << "주문: ";
		getline(cin, s1);

		for (int i = 0; i < s1.find('_'); i++)
			text += s1.at(i);

		for (int i = 0; i < 3; i++)
			if (text == s[i])
				price = (s1.at(s1.find('_') + 1) - '0') * n[i];

		sum += price;

		cout << s1 << "의 총 금액은 " << price << "입니다." << endl;
		cout << "오늘 매출은 " << sum << "입니다." << endl;
	} while (sum <= 30000);

	return 0;
}