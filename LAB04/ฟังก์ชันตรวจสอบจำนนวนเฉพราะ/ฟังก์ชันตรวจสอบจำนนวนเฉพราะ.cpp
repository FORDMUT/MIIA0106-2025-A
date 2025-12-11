#include <iostream>
#include <string>
using namespace std;

void main() {
	int num;
	int count = 0;

	cout << "--- Program to Check Prime Numbers ---" << endl;
	cout << "Enter a number: ";
	cin >> num;

	if (num <= 1) {
		cout << num << " ไม่ใช่จำนวนเฉพาะ (Not Prime)" << endl;
	}
	else {



		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				count++;
			}
		}


		if (count == 0) {

			cout << num << " เป็นจำนวนเฉพาะ " << endl;
		}
		else {

			cout << num << " ไม่ใช่จำนวนเฉพาะ " << endl;
		}
	}
}