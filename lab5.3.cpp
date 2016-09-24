#include <iostream>
#include <iomanip>
// by Cherry Pozon
using namespace std;


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
	
	double contact;
};
int main (){
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
	
	
	
	cout << "SUMMARY REPORT"<<endl;
	cout <<" #"<<setw(10)<<"Customer Name"
		<<setw(10)<<"Order Date"
		<<setw(10)<<"Items"
		<<setw(10)<<"Price"
		<<setw(10)<<"Quantity"<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
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
