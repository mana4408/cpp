#include <iostream>
using namespace std;

template <typename T>
class AddArray
{
private:
	int size;
	T* p;
public:
	AddArray() :size(0), p(nullptr) {}
	AddArray(T p[], int size) :size(size)
	{
		this->p = new T[size];
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
	}
	AddArray(const AddArray& a) :AddArray(a.p, a.size) {}
	~AddArray()
	{
		if (p != nullptr) delete[] p;
	}
	AddArray operator+(const AddArray& a) const
	{
		int new_size = size + a.size;
		T new_arr[100];
		for (int i = 0; i < size; i++)
			new_arr[i] = p[i];
		for (int i = size; i < new_size; i++)
			new_arr[i] = a.p[i - 3];
		return AddArray{ new_arr, new_size };
	}
	AddArray& operator=(const AddArray& a)
	{
		size = a.size;

		delete[] p;
		p = new T[size];

		for (int i = 0; i < size; i++)
			p[i] = a.p[i];

		return *this;
	}
	void show()
	{
		for (int i = 0; i < size; ++i)
			cout << p[i] << " ";
		cout << endl;
	}
};
int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	AddArray<int> a(n, 3);
	AddArray<int> b(m, 4);
	AddArray<int> c;

	c = a + b; // 복사생성자 필요
	a.show();
	b.show();
	c.show();
}
