#include<iostream>
#include<fstream>
using namespace std;
	int main(){
 	ifstream m("input.txt");
 	int x;
 	m>>x;
 	while(x > 1){
 		
		if((x % 2) == 1){
		x = (x*3) + 1;
		cout<<x<<"\t";
	}
	if((x%2) == 0){
	x = x/2;
	cout<<x<<"\t";
	}
	}
 }
