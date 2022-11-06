#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
	string userInput; 
    cout << "Задайте строку" << endl;
    cin >> userInput;
    if (userInput.length() > 20) {
        cout << "\nСлишком длинная строка! " << endl;
        }
    else {
		cout << "спасибо";
	}
	
	return 0;
}
