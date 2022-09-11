#include <iostream>

using namespace std;

const int MINUTES_IN_HOURS = 60;
const int HOURS_IN_DAY = 24;
constexpr int MINUTES_IN_DAY = HOURS_IN_DAY * MINUTES_IN_HOURS;

int main() {
	//setlocale(LC_ALL,"Russian"); //шобы русский поддерживался
	int min_in,h,m,d = 0;
	cin >> min_in;
	d = min_in;
	d = min_in / MINUTES_IN_DAY;
	cout<<"Days: " <<d<<endl;
	int min_in_day = min_in%MINUTES_IN_DAY;
	//cout << "Minutes of day: " <<min_in_day<< endl;
	cout<<"Hours: "<< min_in_day / 60 <<endl;
	cout<<"Minutes: "<<min_in_day % 60 <<endl;
	//путь через константы
	//in h = min_in_day / MINUTES_IN_HOURS;
	//cout<<"Hours: " <<h
	//in m = min_in_day % MINUTES_IN_HOURS;
	//cout<<"Minutes: " <<m
	
	
	return 0;
	

}
