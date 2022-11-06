#include <iostream>



using namespace std;

class Schoolboy {
public:
	string name;
	int age;
	int uroki;
	
	void Talk(string textToTalk) {
		cout<<name<< " speak " << textToTalk << endl;
		
	}
	
	string nagr(int uroki) {
		if(uroki > 6) {
			return ("schoolboy is dead");
		}
		else{
			return("schoolboy is life");
		}
		
		
	}
	
};


int main() {
	Schoolboy firstMan;
	firstMan.name = "Lev";
	firstMan.age = 15;
	firstMan.Talk("help");	
	
	cout<<firstMan.nagr(6)<<endl;

	
	Schoolboy SecondMan;
	SecondMan.name = "Denis";
	SecondMan.age = 16;
	cout<< SecondMan.age << endl; //если параметр не определен то пустота
	//Human.age = 18; так нельзя, скелет не меняется
	SecondMan.Talk("pleh");

	
	cout<<SecondMan.nagr(7)<<endl;
	
	
	
	return 0;

}


