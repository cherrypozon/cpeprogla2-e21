#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Rounded value: "<< round(num) << endl << endl;
	return round(num);
}

void problem2(){
	int uniques[10], num;
	srand((unsigned)time(NULL)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		for(int j=0;j<10;j++){
			if(num==uniques[j]){
					num=(rand()%21);
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << uniques[i]<<" ";
	}
}

int call_by_value(int num){

	if (num!=1)
		return num * call_by_value(num-1);
	
}

int main(){
	double num;
	int result;
	int number;
	problem1(num);
	problem2();
		cout << endl << endl;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;
		cout << "Factorial of " <<  num << " is " << call_by_value(num) << ".";
	
	system ("pause > 0");
	
}






