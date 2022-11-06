#include <iostream>


using namespace std;
	
	
	
int main() {
	int numbers[10] = {4,6,1,5,6,10,8,7,2,23};
	for (int i = 0; i <10; i++) {
		for(int j=0; j<9; j++){
			if(numbers[j] > numbers[j+1]) {
				auto tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
		}
		
		
		
	}
	for (int i = 0; i <10; i++) {
			cout << numbers[i] << " ";
		}
	
	return 0;

}
