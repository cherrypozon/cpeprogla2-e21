#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	
	int hashmat, opponent;
	FILE *fp;
	fp = fopen ("input.txt", "r");
	
	if(!fp){
		cout << "CANNOT OPEN FILE";
		system("pause");
		exit(1);
	}
	char c;
	while (f>>hashmat>>opponent){

	cout << abs(hashmat-opponent) << endl;
	}
	//fclose(fp);

	system ("pause > 0");
	return 0;
}
