#include <iostream>



using namespace std;

void print(int* mas,int n) {
	for (int i=0;i<n;i++) {
		cout << mas[i]<< " " ;
	}
	cout<<endl; 
}

void InsertSort(int* mas, int n){
	for(int i = 0; i<n-1;i++) {
		int key = i +1;
		int tmp = mas[key];
		for(int j=;j>0; j--){
			if(tmp < mas[j-1]) {
				mas[j] = mas[j-1];
				key = j-1;
			}
			print(mas,n);
		}
		
		mas[key] = tmp;
		
	}
void ChouseSort(int* mas, int n) {
	for (int i=0; i<n; i++) {
		int min = mas[i];
		for (int j = 1; j<nl j++) {
			if(min > mas[j] {
				min = mas[j];
			}
		}
		mas[i] = min
		
	}
	
	
}
	
}
int main() {
	setlocale(LC_ALL,"Russian");
	int n;
	cout<<"input cout numbers" <<endl;
	cin>>n;
	int* mas = new int[n];
	for(int i=0; i<n; i++) {	
		mas[i] = rand()%100;
	}
	
	for(int i=0; i<n; i++) {	
		cout <<mas[i] << " ";
	}

	cout << endl;
	ChouseSort(mas,n);
	for(int i=0; i<n; i++) {	
		cout <<mas[i] << " ";
	}

	return 0;
}
