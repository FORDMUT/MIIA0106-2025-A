#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
int main() {
	const int SIZE = 5;
	Student students[SIZE]; 
	
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";

		cout << "Enter ID: ";
		cin >> students[i].id;

		cout << "Enter Nickname: ";
		cin >> students[i].nickname;

		cout << "Enter Line ID: ";
		cin >> students[i].lineId;

		cout << "Enter Phone: ";
		cin >> students[i].phone;

		cout << endl;
	}
	
	    cout << "\n=== Output Student 1 ===\n";
        cout << "ID \tMickname \tLine ID \tPhone\n";
	
	for (int i = 0; i < SIZE; i++) {
		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].lineId << "\t\t" << students[i].phone << "\n";
		
	}
	return 0;
}