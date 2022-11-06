#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	enum DaysOfWeek
	{
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};
	cout << "узнайте в честь чего назван день недели" <<endl;
	cout << "введите номер дня недели" <<endl;
	
	int day = Monday;
	cin >>day;
	switch (day)
	{
		case Monday: cout << "Понедельник - луна";
		break;
		case Tuesday: cout << "Вторник - марс";
		break;
		case Wednesday: cout << "Среда - меркурий";
		break;
		case Thursday: cout <<"Четверг - юпитер";
		break;
		case Friday: cout << "Пятница - венера";
		break;
		case Saturday: cout << "Суббота - сатурн";
		break;
		case Sunday: cout << "Воскресенье - солнце";
		break;
		default:
			cout << "ты че тупой иди посчитай сколько дней недели";
			break;
	}
	
	
	
	return 0;
}

