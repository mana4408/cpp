#include <iostream>
#include <ctime>
#include <array>

using namespace std;

inline double calc_volume(double radius)
{
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}

int main()
{
	// p.160, 2번 문제
	double radius;
	cout << "반지름을 입력하시오: ";
	cin >> radius;
	cout << "구의 부피는 " << calc_volume(radius) << endl;


	// p.162, 9번 문제
	srand((unsigned int)time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	cout << "사용자의 주사위:  " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11)
		cout << "사용자가 이겼습니다." << endl;
	else if (sum == 2 || sum == 3 || sum == 12)
		cout << "사용자가 졌습니다." << endl;


	// p.164, 13번 문제
	char password[20];
	bool d = false, s = false, n = false;
	cout << "암호를 입력하시오: ";
	cin >> password;

	for (int i = 0; i < size(password); i++)
	{
		if (password[i] >= 65 && password[i] <= 90)				// 대문자 아스키코드
			d = true;
		else if (password[i] >= 97 && password[i] <= 122)		// 소문자 아스키코드
			s = true;
		else if (password[i] >= 48 && password[i] <= 57)		// 숫자 아스키코드
			n = true;
	}
	if (d && s && n)
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;



	return 0;
}