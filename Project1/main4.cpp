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

	cout << "에스프레소 2000원, 아메리카노 2500원, 카푸치노 3000원" << endl;
	do
	{
		cout << "주문: ";
		getline(cin, s1, '_');
		cin >> ch;

		for (int i = 0; i < 3; i++)
			if (s1 == s[i])
				price = (ch-'0') * n[i];
		sum += price;

		cout << s1 << "의 총 금액은 " << price << "입니다." << endl;
		cout << "오늘 매출은 " << sum << "입니다." << endl;
		cin.ignore();
	} while (sum<=30000);

	return 0;
}