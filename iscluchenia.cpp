#include <iostream>



using namespace std;



int main(){
	int a,b;
	cin>>a;
	cin>>b;
	try {
		if(b==0) throw 999;
		cout<< "a/b = "<< a / b<< endl;
	}
	catch(int e) {
		if (e ==999) {
			cout<<"can not divide by zero"<<endl;
		}
	}
	return 0;
}
