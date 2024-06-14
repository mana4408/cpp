#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
	size_t size;
	size_t capacity;
	T* items;
public:
	Queue() :size{ 0 }, capacity{ 5 }, items{ new T[capacity] }{}
	~Queue()
	{
		delete[] items;
	}
	void push(T item)
	{
		if (size < capacity)
		{
			items[size++] = item;
		}
		else
		{
			size_t new_capacity = capacity * 2;
			T* old_items = items;
			T* new_items = new T[new_capacity];
			std::copy(old_items, old_items + capacity, new_items);
			items = new_items;
			capacity = new_capacity;
			delete[] new_items;
			push(item);
		}
	}
	void pop()
	{
		for (int i = 1; i < size; i++)
			items[i - 1] = items[i];
		--size;
	}
	T top()
	{
		return items[size - 1];
	}
	void print()
	{
		for (int i = 0; i < size; i++)
			cout << items[i] << " ";
		cout << endl;
	}


};

int main() {
	Queue<int> q0;
	q0.push(10);
	q0.push(20);
	q0.push(30);
	q0.push(40);
	q0.push(50);
	cout << q0.top() << endl;
	q0.print();
	q0.pop();
	q0.print();
	cout << q0.top() << endl;
	cout << endl;

	Queue<std::string> q1;
	q1.push("hello");
	q1.push("world");
	q1.print();
	cout << q1.top() << endl;
	q1.pop();
	q1.print();

	return 0;
}
