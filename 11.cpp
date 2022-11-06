#include <iostream>

using namespace std;

int main() {
	//setlocale(LC_ALL,"Russian"); //шобы русский поддерживался
	string name = "";
	int number = 0;
	cout<<"input integer number"<<endl;
	cin>>number;
	cout<<"input your name"<<endl;
	cin>>name;
	cout<<"User "<<name<<" input number "<<number<<endl;
}
