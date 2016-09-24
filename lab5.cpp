#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
//           LAB5 by Cherry Pozon
int choices;
char ans;

int choice(int choices);
char again(char ans);

void problem1();
void problem2();
void problem3();

	struct rec{
		
		int id, quiz1, quiz2, quiz3;
		int result;
		char name[100];	
	};
	
	struct studRecord{
	int id;
	char name[50];
	double g1, g2, g3, result;
	
};

struct studRecords{
	int id;
	char name[50];
	double g1, g2, g3, result;
	
};

int i, j, tp;

	struct Cust{
		struct Name{
		char fname[20];
		char lname[20];
		}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quantity;
		
		    struct Item{
				int id;
				char iname[20];
				int price;
		};
		
	Item item[3];
	}order;
	
	
};

void problem1(){
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
	
}

	void problem2(){
		studRecords myRec[5];
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
	
	void problem3(){
		cout << "Problem #3" << endl << endl;
void newLine();

	Cust cust[3];
	
	for (i=0;i<3;i++){
		
		cout << "CUSTOMER INFORMATION "<< i+1 <<endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(cust[i].name.fname,50);
		cout << "Last Name: ";
		cin.getline(cust[i].name.lname,50);
		
		
		cout << "ORDER DATE: " << endl;
		cout << "Day: ";
		cin >> cust[i].order.day;
		cout << "Month: ";
		cin >> cust[i].order.month;
		cout << "Year: ";
		cin >> cust[i].order.year;
		cout << "\nENTER 3 ITEMS: "<<endl;
		
		
		for (j=0;j<3;j++){
		    cout << "ID: ";
		    cin >> cust[i].order.item[j].id;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(cust[i].order.item[j].iname,29);
    		cout << "Price: ";
    		cin >>cust[i].order.item[j].price;
    		cout <<"Quantity: ";
    		cin >>cust[i].order.quantity;
    		cout <<endl;
		}
		newLine();
}
	j=0;
	
	
	
	cout << "********** SUMMARY REPORT **********"<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout <<" #"<<setw(10)<<"Customer Name"
		<<setw(10)<<"Order Date"
		<<setw(10)<<"Items"
		<<setw(10)<<"Price"
		<<setw(10)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
	
		tp=0;
		
		cout <<" "<< i+1
			<< setw(10)<<cust[i].name.lname<<","
			<< setw(2)<<cust[i].name.fname
			<< setw(10) <<cust[i].order.day 	
					<<"/"<<cust[i].order.month
					<<"/"<<cust[i].order.year << endl;
		
    	for (j=0;j<3;j++){
    		
    		cout<<setw(40)<<cust[i].order.item[j].iname
				<<setw(2)<<cust[i].order.item[j].price
				<<setw(5)<<cust[i].order.quantity<<endl;
			
    		tp += cust[i].order.item[j].price;
		}
		tp = tp * cust[i].order.quantity;
		cout << setw(40) << "TOTAL PRICE: "<< tp << endl;
	}
	}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
int choice(int choices) {

	cout << "Choose a problem # to solve [1-3]: " ;
	cin >> choices;
	switch(choices) {
		case 1:
			problem1();
			again(ans);
			break;
		case 2:
			problem2();
			again(ans);
			break;
		case 3:
			problem3();
			again(ans);
			break;
		default:
			break;
	}
	return choices;
}

char again(char ans) {
	cout<<"\n\nYou want to solve another problem? [y/n] ";
	cin >> ans;
	if (ans == 'y') {
		system("cls");
		choice(choices);
	}
	else
		cout<<"Thanks for tryinggg!! :D \n";
	
	return ans;
}
main() {
	choice(choices);
}

