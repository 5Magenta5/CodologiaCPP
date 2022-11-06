#include <iostream>


using namespace std;
	
	
	
int main() {
	setlocale(LC_ALL, "Russian");
	int countNumbers = 0;
	int n = 0;

	cout << "введите кол-во чисел" << endl;
	cin >> countNumbers;
	
	while (n <= countNumbers) {
		if (n<10) {
			cout << "000" << n << " ";
		}
		else if (n>=10 and n<100) {
			cout << "00" << n << " ";
		}
		else if (n>=100 and n<1000) {
			cout << "0" << n << " ";
		}
		else  {
			cout << n << " ";
		}
		
		
		n++;
		if (n%10 ==0) {
			cout << endl;
		}
	}
	
	
	return 0;

}
