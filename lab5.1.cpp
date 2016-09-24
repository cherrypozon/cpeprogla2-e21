#include <iostream>
#include <iomanip>

using namespace std;
	struct rec{
		
		int id, quiz1, quiz2, quiz3;
		int result;
		char name[100];	
	};
	
	
	int main(){
		
	rec stud;
	//cout << "********** STUDENT RECORD **********\n";
	cout << endl;
	cout << "Enter Student Record:" << endl;
	cout << "\nEnter ID: ";
	cin >> stud.id;
	cin.ignore();
	cout << "Name: ";
	cin.getline(stud.name,100);
	cout << "Quiz #1: ";
	cin >> stud.quiz1;
	cout << "Quiz #2: ";
	cin >> stud.quiz2;
	cout << "Quiz #3: ";
	cin >> stud.quiz3;
	cout << endl;
	
	stud.result = stud.quiz1 + stud.quiz2 + stud.quiz3;
	cout << endl << endl;
	cout << "********** Student Record **********\n" << endl;

	cout << "ID:" <<stud.id << endl;
	cout << "Name:" << stud.name << endl;
	cout << "Grades:" <<  stud.result/3 << setprecision(3) << endl;
	if (stud.result/3 < 75)
	{
		cout << "Remarks: Failed" << endl;
	}
	else
		cout << "Remarks: Passed" << endl;
	system ("pause > 0");
	return 0;
	
}
