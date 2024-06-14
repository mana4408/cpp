// p.434, 3번 문제
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int height;
public:
	static int box_cnt;
	Time(int l = 0, int w = 0, int h = 0) :hours{ l }, minutes{ w }, height{ h }
	{
		box_cnt++;
	}
	int getVolume() const
	{
		return hours * minutes * height;
	}
	void print() const
	{
		cout << "상자 #" << box_cnt << endl;
		cout << "상자의 길이: " << hours << endl;
		cout << "상자의 너비: " << minutes << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;
	}
	bool operator<(const Time& b) const
	{
		return getVolume() < b.getVolume();
	}
};
int Time::box_cnt = 0;

int main()
{
	Time a{ 10,10,10 };
	a.print();
	
	cout << endl;

	Time b{ 20,20,20 };
	b.print();

	cout << endl;
	
	cout.setf(ios_base::boolalpha);
	cout << (a < b);
	return 0;
}