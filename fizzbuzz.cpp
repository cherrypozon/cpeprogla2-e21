#include <iostream>
using namespace std;
int main ()
{
	int cherry;
	
  	for(cherry = 1; cherry <= 100; cherry++)
  	{
    
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
