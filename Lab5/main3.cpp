#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int num;
	vector<string> vec{ "human","cat","dog","fish" };
	srand(time(NULL));

	cout << "���� �ܾ��� ���� �����Ͻÿ�. 1-4 �� �ٸ� �Է½� �����մϴ�." << endl;
	do
	{
		int ran = rand() % 4;
		cout << vec.at(ran) << "?" << endl;
		cout << "(1)�ΰ� (2)����� (3)�� (4)����� --> ";
		cin >> num;
		if(ran + 1 == num)
			cout << "Correct!" << endl;
		else
			cout << "Incorrect!" << endl;
		cout << endl;
	} while (num == 1 || num == 2 || num == 3 || num == 4);
	
	return 0;
}