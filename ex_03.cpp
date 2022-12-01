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
	T getSize() const
	{
		return size;
	}
	T* getArray() const
	{
		return p;
	}
	virtual T calculate() = 0;
};

template <typename T>
class ForLoopAdder :public AddArray<T>
{
public:
	ForLoopAdder(T p[], int size) :AddArray<T>(p, size) {}
	virtual T calculate() override
	{
		T sum = 0;
		T* arr = AddArray<T>::getArray();
		for (int i = 0; i < AddArray<T>::getSize(); i++)
			sum += arr[i];
		return sum;
	}
};

template <typename T>
class WhileLoopAdder :public AddArray<T>
{
public:
	WhileLoopAdder(T p[], int size) :AddArray<T>(p, size) {}
	virtual T calculate() override
	{
		T sum = 0;
		T* arr = AddArray<T>::getArray();
		int i = 0;
		while (i < AddArray<T>::getSize())
		{
			sum += arr[i];
			i++;
		}
		return sum;
	}
};

int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };

	AddArray<int>* arr0 = new ForLoopAdder<int>(n, 3);
	AddArray<int>* arr1 = new WhileLoopAdder<int>(m, 4);

	cout << arr0->calculate() << endl;
	cout << arr1->calculate() << endl;
}
