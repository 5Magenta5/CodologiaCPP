#include <iostream>

using namespace std;

void calculator(int a, int b);

int main() {
	//setlocale(LC_ALL,"Russian"); //шобы русский поддерживался
	int a, b =0;
	cout<<"Input a:" << endl;
	cin>>a;
	cout<<"Input b:" << endl;
	cin>>b;
	calculator(a,b);
	return 0;

}

void calculator(int a,int b) {
	cout<<"Sum = " <<a+b;
	cout<<"Razn = " <<a-b;
	cout<<"Umn = " <<a*b;
	cout<<"Del = " <<a / b;

}
