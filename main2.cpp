#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout << "끝말잇기 시작" << endl;
	cout << "문자를 입력하시오." << endl;
	cin >> s2;
	do
	{
		s1 = s2;
		cout << "문자를 입력하시오." << endl;
		cin >> s2;

	} while (s1.back() == s2.front());


	cout << "틀렸습니다!" << endl;
	return 0;
}