#include <iostream>
#include <string>

using namespace std;

int main()
{
	// p.353, 1�� ����
	int num;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;
	int* p = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> *(p + i);
	}
	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << ", ";
	}
	delete[] p;


	// p.353, 2�� ����
	int num;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> num;
	string* p = new string[num];
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> *(p + i);
	}
	cout << endl << "������ �̸� ����Դϴ�. " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� #" << i + 1 << ": " << p[i] << endl;
	}
	delete[] p;



	return 0;
}