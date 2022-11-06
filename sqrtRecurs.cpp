#include <iostream>
#include  <math.h>


using namespace std;

int a = 0;
int b = 0;
	
double pov (int a, int n) {
	if(n==0) return 1;
	else if(n==1) return a;
	else if (n<0) return 1/pow(a,n*-1);
	else return a*pow(a,n-1);
	
}
int main() {
	cout<<pov(5,2)<<endl;
	cout<<pov(5,-2)<<endl;
return 0;
}
