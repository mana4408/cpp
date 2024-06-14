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

	cout << "영어 단어의 뜻을 선택하시오. 1-4 외 다른 입력시 종료합니다." << endl;
	do
	{
		int ran = rand() % 4;
		cout << vec.at(ran) << "?" << endl;
		cout << "(1)인간 (2)고양이 (3)개 (4)물고기 --> ";
		cin >> num;
		if(ran + 1 == num)
			cout << "Correct!" << endl;
		else
			cout << "Incorrect!" << endl;
		cout << endl;
	} while (num == 1 || num == 2 || num == 3 || num == 4);
	
	return 0;
}