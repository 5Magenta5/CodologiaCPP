#include <iostream>
using std:: cout;
using std:: endl;



using namespace std;

class Car {
public: 
	double Engine;
	double Mass;




	double getMaxSpeed() {
		return(Engine/Mass * 1000);
	}
		
};


int main() {

Car bmvm;
bmvm.Engine = 100;
bmvm.Mass = 200;
cout<< bmvm.getMaxSpeed() << endl;
}

