#include <iostream>
using std:: cout;
using std:: endl;



using namespace std;

class Circle {
private: 
	double pi = 3.14;
	double r;
	
public:
	int radius;

	Circle(int radius)
	:r(radius)
	{
		cout << "Circle is created" << endl;
	}
	double getSquare() {
		return pi*r*r;
	}
	double getPerimetr() {
		return pi*r*2;
	}
	
		
};


int main() {
	Circle myCircle(10);
	cout << myCircle.getSquare() << endl;

}

