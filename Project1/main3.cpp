#include "Box.h"

using namespace std;

int main()
{
	Box box;
	box.draw();

	box.setBox(5, 7, '^');
	box.draw();

	return 0;
}