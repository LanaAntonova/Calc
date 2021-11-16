#include <iostream>
using namespace std;

void main()
{
	int menu = 0;
	cout << "\n______________________________\n_________|Calculator|_________\n"
		"\n\t[1] - Summation\n\t[2] - Subtraction\n\t[3] - Multiply"
		"\n\t[4] - Diviation\n______________________________\n" << endl;
	cin >> menu;

	switch (menu) {
	case 1:
		cout << "\n[Summation] in development\n" << endl;
		break;
	case 2:
		cout << "\n[Subtraction] in development\n" << endl;
		break;
	case 3:
		cout << "\n[Multiply] in development\n" << endl;
		break;
	case 4:
		cout << "\n[Diviation] in development\n" << endl;
		break;
	}
	system("pause");
}