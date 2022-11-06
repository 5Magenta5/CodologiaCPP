#include <iostream>



using namespace std;

class Fish{
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
	
	return 0;

}

