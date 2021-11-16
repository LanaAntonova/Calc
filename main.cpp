#include <iostream>
#include "funcs.h"
using namespace std;

void main()
{
	int a = 0, b = 0, c = 0;
	int menu = 0;
	cout << "\n______________________________\n_________|Calculator|_________\n"
		"\n\t[1] - Summation\n\t[2] - Subtraction\n\t[3] - Multiply"
		"\n\t[4] - Diviation\n______________________________\n" << endl;
	cin >> menu;

	switch (menu) {
	case 1:
		cout << "\n[Summation]\tInput two numbers:\n" << endl;
		cin >> a; cin >> b;	c = Sum(a, b);
		cout << "\n\t" << a << " + " << b << " = " << c << "\n______________________________\n" << endl;
		break;
	case 2:
		cout << "\n[Subtraction]\tInput two numbers:\n" << endl;
		cin >> a; cin >> b;	c = Sub(a, b);
		cout << "\n\t" << a << " - " << b << " = " << c << "\n______________________________\n" << endl;
		break;
	case 3:
		cout << "\n[Multiply]\tInput two numbers:\n" << endl;
		cin >> a; cin >> b;	c = Mul(a, b);
		cout << "\n\t" << a << " * " << b << " = " << c << "\n______________________________\n" << endl;
		break;
	case 4:
		cout << "\n[Diviation]\tInput two numbers:\n" << endl;
		cin >> a; cin >> b;	c = Div(a, b);
		cout << "\n\t" << a << " / " << b << " = " << c << "\n______________________________\n" << endl;
		break;
	}
	system("pause");
}