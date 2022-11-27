#include <iostream>



using namespace std;


class Date {
private:
	int day;
	int month;
	int year;
	
public:
	Date(int d, int m, int y) try {
	if (d<1 or d>30) throw 1;
	if (m<1 or m>12) throw 2;
	if (y<0) throw 3;
		
		
	day = d;
	month = m;
	year = y;
	}
	catch (int error) {
		if(error == 1) cout << "incorrect day" <<endl;
		if(error == 2) cout << "incorrect month" <<endl;
		if(error == 3) cout << "incorrect year" <<endl;				
	}
	
	void showDate(){
		cout<<day<< " days "<< month <<" month "<< year<<" years " <<endl;
	}
	Date operator ++(){
		++day;
		return *this;
		
	}
	
	Date operator ++(int) {
		Date copy(day,month,year);
		++day;
		return copy;
	}
	
	
	void addDays2Date(int d) {
		day+=d;
		if (day>30) {
			month+=day/30;
			day = day%30;
			
		}
		if (month>12) {
			year+=month/12;
			month = month%12;
		}
		
	}
};
int main(){
	Date day(1,1,1);
	try {
		Date day1(1,12,2022);
		day = day1;
	}
	catch(...) {
		cout<<"object not created" <<endl;
	}
	
	day.showDate();
	day++;
	day.showDate();
	++day;
	day.showDate();
	
	
}
