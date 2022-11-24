#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Queue
{
private:
	vector<T> items;
public:
	Queue() {}
	~Queue() {}
	void push(T item)
	{
		items.push_back(item);
	}
	void pop()
	{
		for (int i = 1; i < items.size(); i++)
			items[i - 1] = items[i];
		items.pop_back();
	}
	T top()
	{
		return items.back();
	}
	void print()
	{
		for (T i : items)
			cout << i << " ";
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
