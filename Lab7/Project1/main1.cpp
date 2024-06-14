#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printRef0(int(&nums)[5])
{
	for (int i = 0; i < 5; i++)
		cout << nums[i] << " ";
	cout << endl;
}
void printRef1(array<int, 5>& nums)
{
	for (int i = 0; i < 5; i++)
		cout << nums[i] << " ";
	cout << endl;
}
void printRef2(vector<int>& nums)
{
	for (int i = 0; i < 5; i++)
		cout << nums[i] << " ";
	cout << endl;
}

int main() 
{
	int num0[]{ 1,3,5,7,9 };
	array<int, 5>num1{ 1,3,5,7,9 }; 
	vector<int>num2{ 1,3,5,7,9 };

	printRef0(num0);
	printRef1(num1);
	printRef2(num2);
}