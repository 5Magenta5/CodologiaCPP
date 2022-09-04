#include  <iostream>

using namespace std;

int funcSL(int a, int b, int c) {
	cout<<"2+2*2="<<a+b*c<<endl; 
	return 0;
}
int funcVSH(int R) {
	cout<<"V = 4/3*3.14*r^3="<<4/3*3.14*(R*R*R)<<endl; 
	return 0;
}
int funcELKA()	{
	cout << "   /|\\ " << endl; 
	cout << "  //|\\\\" << endl; 
	cout << " ///|\\\\\\" << endl; 
	cout << "////|\\\\\\\\" << endl; 
	return 0;
}

int funcTRAP(int a, int b, int h) {
	cout<<"S = (a+b)/2*h="<<((a+b)/2)*h<<endl; 
	return 0;
}
int main() {
	cout << "Привет!" << endl; 
	cout << "Эта программа первая, которую я написал самостоятельно!" << endl; 
	funcSL(2,2,2);
	funcVSH(10);
	funcELKA();
	funcTRAP(5,10,2);
	return 0;
}
