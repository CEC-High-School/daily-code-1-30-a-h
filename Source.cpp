#include <iostream>
using namespace std;
int main() {

	int num = 20; //starting point
	while (num<81) { //go while less than 80
		cout << num << " ";
		num++; //add one
	}

	cout << endl << endl;

	num = 70; //starting point
	while (num>=10) { //go while less than 80
		cout << num << " ";
		num--; 
	}


	cout << endl << endl;
		for (int q = 70; q > 9; q--)
			cout << q << " ";
		
		
		cout << endl << endl;
	
		
		for (int a = 20; a < 81; a++)
			cout << a << " ";
}