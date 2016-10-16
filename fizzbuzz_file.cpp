
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream f("input.txt");
	int cherry;
	FILE *fp;
	fp = fopen ("input.txt", "r");
	
	if (!fp){
		cout << "CANNOT OPEN FILE";
		system("pause");
		exit(1);
	}

  	while (f>>cherry){
		if(cherry % 3 == 0 && cherry % 5 == 0)
      		cout << "FizzBuzz" << endl;
      
    	else if(cherry % 3 == 0)
      		cout << "Fizz" << endl;
      
    	else if(cherry % 5 == 0)
      		cout << "Buzz" << endl;
      
    	else cout << cherry << endl;
	}
  	
  
return 0;
}
