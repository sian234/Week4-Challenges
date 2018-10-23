//Main.cpp
//Author: Sian McClean
//Date: 19/10/2018
//Description: Driver to test the std::array class

#include <iostream>
#include <array>

using namespace std;

class A {

	int num_;

public:
	int GetNum() const { return num_; }
	void SetNum(int num) { num_ = num; }

};

int main() {

	int index;
	array <float, 3> arrayofFloats{ 2.0f, 3.4f }; //array - type float - holds 3 - name of array - variables in array
	array <A, 3> objects;

	cout << "The contents of the arrayofFloats is: " << endl;
	for (index = 0; index < arrayofFloats.size(); index++) {
	
		cout << arrayofFloats[index] << " "; //will print each variable in the array
	
	}

	for (index = 0; index < objects.size(); index++) {

		objects[index].SetNum(index); 
		
		//iterate through the objects array, for eacj instance in it it will call SetNum from the class and set it to the index
		//setnum to set the value in the objects
	}

	cout << "The contents of the objects array is: " << endl;
	for (index = 0; index < objects.size(); index++) {

		A tempA = objects[index]; //goes through the array and sets the value of temp to the array value (tidier way of doing it)
		cout << tempA.GetNum() << " ";
		//getnum if we want to print out the value of the object

	}

	return 0;




}