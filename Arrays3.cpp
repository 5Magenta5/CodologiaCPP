#include <iostream>
#include <vector>

using namespace std;

void printMas(vector<int> mas){           //цикл для вывода массива
	for (int i=0;i < mas.size(); i++) {
		cout << mas [i] << " ";
	}
	cout << endl;
}
int main()
{	
	setlocale(LC_ALL, "Russian");
	vector<int> dynArrNums(3); // динам масив
	
	dynArrNums[0] = 365;
	dynArrNums[1] =-421;
	dynArrNums[2] = 789;
	
	cout << "Чисел в массиве: "<< dynArrNums.size() << endl;
	
	cout<< "ВВедите новое число для вставки в массив: ";
	int anotherNum = 0;
	cin>> anotherNum;
	dynArrNums.push_back(anotherNum);
	
	cout << "Чисел в массиве: " << dynArrNums.size() << endl;
	cout << "Последний элемент массива: ";
	cout << dynArrNums[dynArrNums.size() - 1] << endl;
	
	printMas(dynArrNums);
	
	return 0;
}


