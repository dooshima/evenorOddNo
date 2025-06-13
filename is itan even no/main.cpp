#include<iostream>
using namespace std;

int main() {

	int anyNumber;

	//long hand codes
	cout << "Enter any number of your choice : ";
	cin >> anyNumber;

  	
	if (anyNumber % 2 == 0) {
		cout << "Its an even no"<< std::endl;

	}
	else {
		cout << "Its an odd no"<< std::endl;

	}

	//short hand
	cout << "Enter any number of your choice : ";
	cin >> anyNumber;
	cout << (anyNumber & 1 ? "Odd" : "Even") << endl;


	return 0;
}
