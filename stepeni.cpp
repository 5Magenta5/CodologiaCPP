#include <iostream>


using namespace std;
	
int pow(int base, int exponent) {
int total = 1;
		for (int i = 0; i<exponent; i++) {
		total = total  * base;
		}
		
	return total;
}


double pow1(double base, int exponent) {
	double total = 1;
	if (exponent < 0) {
		exponent = exponent *-1;
		for (int i = 0; i < exponent; i++) {
			total = total * base;
		}
		return 1/total;
	}
	else {
		return -1;
	}
}
	
	
int main() {
	setlocale(LC_ALL, "Russian");
	cout << pow1(0.5,-3) << endl;
	return 0;

}
