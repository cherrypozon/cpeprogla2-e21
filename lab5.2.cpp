#include <iostream>
#include <iomanip>
// programmed by Cherry Pozon
using namespace std;
struct studRecord{
	int id;
	char name[50];
	double g1, g2, g3, result;
	
};


//void newLine();


int main ()
{
	studRecord myRec[5];
	const char* remarks[5];
	cout << "Enter 5 student(s) Record" << endl<< endl;
	for (int i = 0; i < 5 ; i++)
	{
	
	
	cout << "Student "<< i+1 << ":" << endl;
	cout << "ID: ";
	cin >> myRec[i].id;
//	newLine();
	cin.ignore();
	cout << "Name: ";
	cin.getline(myRec[i].name, 100);
	cout << "Enter 3 quizzes: ";
	cin >> myRec[i].g1 >> myRec[i].g2 >> myRec[i].g3;
	
	myRec[i].result = myRec[i].g1 + myRec[i].g2 + myRec[i].g3;
	

	
	}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << setw(10) << "No."
		<< setw (20) << "Student No."
		<< setw (20) << "Name"
		<< setw (10) << "Grade"
		<< setw (10) << "Remark"
		<< endl;
	for(int i=0; i<5; i++)
	{
		if (myRec[i].result / 3 < 75)
		{
			remarks[50] = "FAILED";
		}
		else
		{
			remarks[50] = "PASSED";
		}
		
		cout << setw(10) << i+1;
		cout << setw(20) << myRec[i].id 
			<< setw (20) << myRec[i].name 
			<< setw (10) << myRec[i].result / 3 
			<<setw (10) << remarks[50] << endl;
			
	}

}
//void newLine(){
//     char s;
//     do{cin.get(s);}while(s!='\n');     
//}
