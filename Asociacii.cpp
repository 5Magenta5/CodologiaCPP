#include <iostream>
#include <string>
#include <vector>




using namespace std;
class Doctor;

class Patient {
private:
	string m_name;
	vector <Doctor *> m_doctor;
	void addDoctor(Doctor *doc);

public:
	Patient(string name)
	: m_name(name){
		cout << "patient is created> his name is "<< m_name << endl;
	}
	
	~Patient() {
		cout << "destruct patient, his name is "<< m_name << endl;
	}
	string getName() const {
		return m_name;
	}
	
	friend ostream& operator <<(ostream &out, const Patient& pat);
	
	friend class Doctor;

};

class Doctor {
private: 
	string m_name;
	vector <Patient*> m_patient;
public: 
	Doctor(string name)
	: m_name(name ) {
		cout << "created doctor, his name " << m_name << endl;
	}
	~Doctor() {
		cout << "Destruct doctor, his name " << m_name << endl;
	}
	void addPatient(Patient* pat) {
		m_patient.push_back(pat);
		pat -> addDoctor(this);
	}
	friend ostream& operator << (ostream& out, const  Doctor & doc) {
		int length = doc.m_patient.size();
		if (length == 0) {
			out << doc.m_name << " has no patients right now" << endl;
			return out;
		}
		out << doc.m_name << " is seeing patients ";
		for (int count = 0; count < length; ++count) {
			out << doc.m_patient[count] -> getName() + " ";
		}
		return out;	
	}
	
	string getName() const {
		return m_name;
	}

};

void Patient:: addDoctor(Doctor* doc) {
	m_doctor.push_back(doc);
}

ostream& operator << (ostream& out, const  Patient & pat) {
		int length = pat.m_doctor.size();
		if (length == 0) {
			out << pat.m_name << " has no doctors right now" << endl;
			return out;
		}
		out << pat.m_name << " is seeing doctors ";
		for (int count = 0; count < length; ++count) {
			out << pat.m_doctor[count] -> getName() + " ";
		}
		return out;	
	}
	
int main(){
	Patient* p1 = new Patient("Anton");
	Patient* p2 = new Patient("Boris");
	Patient* p3 = new Patient("Ivan");
	Patient* p4 = new Patient("Sergey");
	
	Doctor* d1 = new Doctor("dr. Georgiy");
	Doctor* d2 = new Doctor("dr. Evgeniy");
	
	d2 -> addPatient(p1);
	d2 -> addPatient(p2);
	d1 -> addPatient(p2);
	d1 -> addPatient(p3);
	d2 -> addPatient(p4);
	
	cout << *d1 << endl;
	cout << *d2 << endl;
	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << *p3 << endl;
	cout << *p4 << endl;
	
	return 0;
}

