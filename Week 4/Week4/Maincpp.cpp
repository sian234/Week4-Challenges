//Main.cpp
//Author: Sian McClean (from Shane's notes)
//Date: 16/10/2018
//Description: Driver to test Arrays

#include<iostream>

using namespace std;

int main() {

	int totalNumbers(const int values[]);



	int numbers[5];
	

		for (int i = 0 ; i < 5; i++) {
		
			cout << "\nPlease input number " << i+1 <<": ";
			cin >> numbers[i];
		
		}
		sizeof(numbers); //this will return the total size of the array in bytes

		int arraysize = sizeof(numbers)/sizeof(numbers[0]);

		cout << "The size of the array is: " << arraysize << " elements";
		cout << "\nThe total of the numbers was: " << totalNumbers(numbers) << endl;
		
	return 0;
}

int totalNumbers(const int values[]) {

	int total{ 0 };
	int index;
	for (index = 0; index < 5; index++) {
	
		total += values[index];
	}

	return total;
}