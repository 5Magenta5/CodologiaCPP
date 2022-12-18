#include <iostream>
#include <string>
#include "Kompozicia.h"



using namespace std;

class Point2D {
private:
	int m_x;
	int m_y;
public:
	Point2D()
	: m_x(0), m_y(0) {
	}
	Point2D(int x, int y)
	: m_x(x), m_y(y) {
	}
	void setPoint(int x, int y) {
		m_x = x;
		m_y = y;
	}
	
	friend std::ostream& operator << (std::ostream& out, const Point2D& point) {
		out << "(" << point.m_x << "," << point.m_y << ")";
		return  out;
	}
};

class Creature {

private:
	std::string m_name;
	Point2D m_location;
	
public:
Creature(const std::string & name, const Point2D& location)
	: m_name(name), m_location(location) {
		
	}
	
	void moveTo(int x, int y) {
		m_location.setPoint(x,y);
		
	}
	
	friend std::ostream& operator << (std::ostream& out, const Creature& creature) {
		out << creature.m_name + "is at " << creature.m_location;
		return  out;
		
	}	
};

int main() 
{
	cout<<"imput your name:" <<endl;
	string name;
	cin >> name;
	Creature p1(name, Point2D(5,6));
	cout<<p1<<endl;
	
	
	
	
}
