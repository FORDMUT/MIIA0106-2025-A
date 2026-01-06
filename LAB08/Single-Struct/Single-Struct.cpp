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
	Student s1; 
	cout << "=== Input Student 1 ===\n";
	
	cout << "Enter ID: ";
	cin >> s1.id;
	
	cout << "Enter Nickname: ";
	cin >> s1.nickname;
	
	cout << "Enter Line ID: ";
	cin >> s1.lineId;
	
	cout << "Enter Phone: ";
	cin >> s1.phone;
	
	cout << "\n=== Output Student 1 ===\n";
	
	cout << "ID \tMickname \tLine ID \tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.lineId << "\t\t" << s1.phone << "\n";


	return 0;
}