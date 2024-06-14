#include <iostream>
#include <array>

using namespace std;

void printArr(array<int, 5>& nums);

int main()
{
	array<int, 5>num1{ 1,3,5,7,9 };
	array<int, 5>num2{ 2,4,6,8,10 };

	cout << "첫 번째 array 출력" << endl;
	printArr(num1);
	cout << "두 번째 array 출력" << endl;
	printArr(num2);

	cout << "-----------------------------------" << endl;

	cout << "배열 값 교환 함수 호출 후" << endl;
	num1.swap(num2);

	cout << "첫 번째 array 출력" << endl;
	printArr(num1);
	cout << "두 번째 array 출력" << endl;
	printArr(num2);
}

void printArr(array<int, 5>& nums)
{
	for (int& i : nums)
		cout << i << " ";
	cout << endl;
}