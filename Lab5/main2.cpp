#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout << "�����ձ� ����" << endl;
	cout << "���ڸ� �Է��Ͻÿ�." << endl;
	cin >> s2;
	do
	{
		s1 = s2;
		cout << "���ڸ� �Է��Ͻÿ�." << endl;
		cin >> s2;

	} while (s1.back() == s2.front());


	cout << "Ʋ�Ƚ��ϴ�!" << endl;
	return 0;
}