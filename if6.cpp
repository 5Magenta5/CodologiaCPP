#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	int h=0,m=0;
	cout << "введите часы и минуты"<<endl;
	cin>>h>>m;
	if (h >= 0 and h <= 6 and m > 0 and m <= 30) {
		cout<< "утро"<< endl;
		}
	else {
		if (h >= 6 and h <= 15 and m < 40 ) {
		cout<< "день"<< endl;
	}
	else {
		if (h >= 15 and h <= 20 and m > 40 and m != 0) {
		cout<< "вечер"<< endl;
	}
	else {
		if (h >= 20; and h < 0 and m > 30 and m <= 0) {
		cout<< "ночь"<< endl;
	}
	
	
}
	return 0;
}


}
