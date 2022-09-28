#include <iostream>
#include <string>

using namespace std;

int main()
{
	// p.353, 1번 문제
	int num;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;
	int* p = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "정수를 입력하시오 : ";
		cin >> *(p + i);
	}
	cout << "입력된 정수는: ";
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << ", ";
	}
	delete[] p;


	// p.353, 2번 문제
	int num;
	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> num;
	string* p = new string[num];
	for (int i = 0; i < num; i++)
	{
		cout << "이름 입력 # " << i + 1 << ": ";
		cin >> *(p + i);
	}
	cout << endl << "다음은 이름 목록입니다. " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "이름 #" << i + 1 << ": " << p[i] << endl;
	}
	delete[] p;



	return 0;
}