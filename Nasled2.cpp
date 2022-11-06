#include <iostream>



using namespace std;

class Fish{
protected:
	//bool isFreshWaterFish; // если эта строчка тут, то обратиться к ней нельзя из других частей кода
public:
	bool isFreshWaterFish;
	void Swim() {
		if (isFreshWaterFish) cout << "Presnovodniy"<< endl;
		else cout << "morskoy" << endl;
	}
	
};

class Carp : public Fish { // наследует паблик у предка fish
public:
	Carp() {
		isFreshWaterFish = true;
	}
};

class Tuna : public Fish {  // наследует паблик у предка fish
public:
	Tuna() {
		isFreshWaterFish = false;
	}
};

int main() {
	Carp myDinner;
	Tuna myLaunch;
	cout<< "my food: "<< endl;
	myDinner.Swim(); // из за наследия паблика fish он может использовать swim
	myLaunch.Swim(); // из за наследия паблика fish он может использовать swim
	
	//myDinner.isFreshWaterFish = false; // его можно изменить только если bool isFreshWaterFish не в protected
	
	return 0;

}
