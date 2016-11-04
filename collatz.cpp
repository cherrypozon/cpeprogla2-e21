#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int a,b, h=1, g=1;
int i;
int manip;

int main (){
	ifstream f("input.txt");
	
	while (f>>a>>b){
		
		for (i=a; i<b; i++){
			manip = i;
			h=1;
			
			while (manip > 1){
				if ((manip % 2) == 0){
					manip = (manip / 2);
					h++;
				}
				
				else if ((manip % 2) != 0){
					manip = ((3 * manip) + 1);
					h++;
				}
			if (h > g) {
				g = h;
			} 	
			}
		}
	cout << a << " " << b << " " << g << endl;	
	}
return 0;
}

