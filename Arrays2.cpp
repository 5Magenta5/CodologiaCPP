#include <iostream>

using namespace std;


void printMas(int mas[5]){           //цикл для вывода массива
	for (int i=0;i <5; i++) {
		cout << mas [i] << " ";
	}
	cout << endl;
}
int main()
{	
	setlocale(LC_ALL, "Russian");
	int numbers[5] = {120,155,43435,43646};
	cout<<"Какой элеммент массива вы хотите переписать?"<<endl;
	int index = 0;
	cin>>index;
	cout<<"на что вы хотите перезаписать"<<endl;
	int newValue = 0;
	cin>>newValue;
	numbers[index] = newValue;
	//cout<<numbers[0] <<" " <<numbers[1] << " " <<numbers[2] << " " <<numbers[3] <<" " <<numbers[4] <<endl; //заменили циклом printMas
	printMas(numbers);
	
	
	return 0;
}

