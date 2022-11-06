#include <iostream>
#include <string>

using namespace std;


int main()
{	
	setlocale(LC_ALL, "Russian");
	
	cout << "введите строку"<< endl;
	string firstline;
	getline(cin, firstline);
	
	cout << "Длинна строки: " << firstline.lenght() << endl;
		
	return 0;
}
