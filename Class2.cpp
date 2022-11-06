#include <iostream>



using namespace std;

class Human {
private:
	int age;
public:
	string name;
	string gender;
	Human(string humanName="Smith", int humanAge=18) // - это конструктор, выполняется при создании обьекта, т.е при создании обьекта надо указать (имя, возраст). Конструктор всегда называется как класс
	:name(humanName),age(humanAge)
	{ 
		cout<<"constructor create human " << name << endl;
	}
	
	/*Human() { // - конструктор но если не заданны параметры то присвоит эти
		age = 18;
		name = "Smith";
		cout<<"constructor create human " << name << endl;
	}
	
	Human(int humanAge) { // - конструктор но если задан только параметр - возраст
		age = humanAge;
		name = "Smith";
		cout<<"constructor create human " << name << endl;
	}
	
	Human(string humanName) { // - конструктор но если задан только параметр - имя
		age = 18;
		name = humanName;
		cout<<"constructor create human " << name << endl;
	}
	*/
	
	int GetAge() {
		return (age<30)?age:age-2;
		//if (age<30) {
		//return age
		//}
		//else {
		//	return age-2
		//}
		
	}
	void setAge(int myAge) {
		if (myAge > 0) {
			age = myAge;
		}
	}
	void Introducelf()
	{
	cout<<"ya" + name << " i mne ";
	cout<< GetAge() << " let"<<endl;
	}
	
};


int main() {
	Human firstMan("Boris", 10);
	
	Human SecondMan("Smitt");
	cout<< SecondMan.GetAge() <<endl;	

	
	
	return 0;

}


