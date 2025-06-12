#include<iostream>
using namespace std;

int main() {

	int anyNumber, oddOrEvenNo;

	cout << "Enter any number of your choice : ";
	cin >> anyNumber;

	
	if (anyNumber % 2 == 0) {
		cout << "Its an even no";

	}
	else {
		cout << "Its an odd no";

	}


	return 0;
}