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
	// p.160, 2�� ����
	double radius;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;
	cout << "���� ���Ǵ� " << calc_volume(radius) << endl;


	// p.162, 9�� ����
	srand((unsigned int)time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	cout << "������� �ֻ���:  " << dice1 << "+" << dice2 << "=" << sum << endl;
	if (sum == 7 || sum == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (sum == 2 || sum == 3 || sum == 12)
		cout << "����ڰ� �����ϴ�." << endl;


	// p.164, 13�� ����
	char password[20];
	bool d = false, s = false, n = false;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> password;

	for (int i = 0; i < size(password); i++)
	{
		if (password[i] >= 65 && password[i] <= 90)				// �빮�� �ƽ�Ű�ڵ�
			d = true;
		else if (password[i] >= 97 && password[i] <= 122)		// �ҹ��� �ƽ�Ű�ڵ�
			s = true;
		else if (password[i] >= 48 && password[i] <= 57)		// ���� �ƽ�Ű�ڵ�
			n = true;
	}
	if (d && s && n)
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;



	return 0;
}