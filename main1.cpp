#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
	int count = 0;
	array<char, 10> arr;
	srand(time(NULL));
	cout << "array 출력" << endl;
	for (int i = 0; i < 10; i++)
	{
		int number = rand() % 26;
		arr[i] = number + 'a';
		cout << arr[i] << " ";
		if (arr[i] == 97)
			count++;
	}
	cout << endl << "a의 갯수는 " << count << endl;
	return 0;
}
