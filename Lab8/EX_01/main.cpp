#include <iostream>
#include <string>
#include "Labs.h"

using namespace std;

int main()
{
	Student students[3] =
	{
		{"ȫ�浿", "202201"},
		{"������", "202202"},
		{"�̸���", "202203"}
	};

	Labs lab02{ "����ó�� ������", true, 3 };
	for (Student st : students)
		lab02.setStudent(st);
	lab02.print();

	applyLab(lab02, 2);

	cout << "-----------------------" << endl;

	lab02.print();

	return 0;
}

/*int main()
{
	Labs lab01;
	lab01.print();
	lab01 = createLab();
	lab01.print();
	cout << "-----------------------" << endl;

	Labs lab02{ "����ó�� ������", true, 3 };
	lab02.print();

	applyLab(lab02, 2);
	lab02.print();


	cout << "-----------------------" << endl;
	lab01.checkNumber(lab02).moreNumber();

	return 0;
}*/