#include <iostream>

using namespace std;

int main() {
	cout << "введите 2 целых числа" <<endl;
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	cout << "введите 'p' для сложения, любое иное для умножения" <<endl;
	char userSelection = 'a';
	cin >>  userSelection;
	if (userSelection == 'p') {
		cout << num1+num2;
	}
	else {
		cout << num1*num2;
	}
	return 0;
}
