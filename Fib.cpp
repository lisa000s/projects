#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	char operation;

	switch (operation) {
	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '%':
		bool num1IsInt, num2IsInt;
		num1IsInt = (int)num1 == num1;
		num2IsInt = (int)num2 == num2;

		if (num1IsInt && num1IsInt)
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
		else
			cout << "Not valid!" << endl;
		break;
	default: cout << "Not valid operation";
	}

	system("pause>0");
}