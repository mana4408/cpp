// p.435, 5¹ø ¹®Á¦
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time() :hours{ 0 }, minutes{ 0 } {}
	Time(int h, int m) :hours{ h }, minutes{ m }{}

	void displayTime() const
	{
		cout << hours << " : " << minutes << endl;
	}
	Time& operator++()
	{
		minutes++;
		if (minutes == 60)
		{
			hours++;
			minutes = 0;
			if (hours == 24)
				hours = 0;
		}
		return *this;
	}
};

int main()
{
	Time a{ 10,59 };
	a.displayTime();

	++a;
	a.displayTime();

	++a;
	a.displayTime();

	return 0;
}