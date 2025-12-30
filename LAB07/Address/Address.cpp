#include <iostream>
using namespace std;
int main() {
	int score = 50;
	int* ptr = &score;
	cout << score << endl;
	cout << *ptr << endl;
	cout << "address of Score\t " << &score << endl;
	cout << "Value of ptr\t\t " << ptr << endl;
	cout << "address of pointer\t " << &ptr << endl;

	return 0;
}