#include <iostream>



using namespace std;
class Dollars;
class Ruble;

class Dollars;

class Ruble {
private:
	int rubl;
	int kopek;
	
public:
	Ruble(int r, int k) {
		if (r<0 && k<0){
			cout<<"y vas 0 deneg" <<endl;
			r = 0;
			k =0;
		}
		else{	
		rubl = r;
		kopek = k;
		}
	}
	
	Dollars convert();
	
	
	
	void balance() {
		cout << "y vas: " << rubl << "rubley " << kopek << " kopeek"<< endl;
	}
	
	void addMoney(int r, int k) {
		rubl += r;
		if (k+kopek>=100) {
			rubl+=1;
			kopek+=k-100;
			
		}
		else{
			kopek += k;
		}
	}
	
	void takeMoney(int r, int k) {
	if ((r<rubl) || ((r=rubl)&&(k<=kopek))) {
			rubl -= r;
			kopek -=k;
			cout<<"vi vzali dengi"<<endl;
		}
		else {
			cout<< "nelza vzat tak mnogo"<<endl;		
			}
	}
	

};
class Dollars{
private:
	int doll;
	int cent;
	
public: 
	Dollars(int d, int c) {
		if (d<0 && c<0){
			cout<<"y vas 0 deneg" <<endl;
			d = 0;
			c =0;
		}
		else{	
		doll = d;
		cent = c;
		}
	}	
	Ruble convert();
	
	void balance() {
		cout << "y vas: " << doll << "dollars " << cent << " cents"<< endl;
	}
	
	void addMoney(int d, int c) {
		doll += d;
		if (c+cent>=60) {
			doll+=1;
			cent+=c-60;
			
		}
		else{
			cent += c;
		}
	}
	Ruble change() {
		Ruble rubl(doll * 60+ (cent * 60) / 100,(cent*60) %100);
		return rubl;
	}
	
	void takeMoney(int d, int c) {
	if ((d<doll) || ((d=doll)&&(c<=cent))) {
			doll -= d;
			cent -=c;
			cout<<"vi vzali dengi"<<endl;
	}
	else {
		cout<< "nelza vzat tak mnogo"<<endl;		
		}
	}

};

Dollars Ruble::convert()
{
	return Dollars(rubl/60,kopek/60);
}
Ruble Dollars::convert()
{
	return Ruble(doll*60,cent*60);
}


int main() {

	Ruble myWage(5000,30);
	Dollars myWage_d(0,0);
	myWage_d = myWage.convert();
	myWage_d.balance();
	
	
	return 0;

}



