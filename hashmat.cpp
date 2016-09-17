#include<iostream>
#include<cmath>
using namespace std;

int main()

{
	int hashmat[3],i,a,b;

	for(i=0;i<3;i++)
	{
		cin>>a>>b;
		hashmat[i]=abs(a-b);
	}
	cout << endl << hashmat[0] << endl << hashmat[1] << endl << hashmat[2] <<endl;
	system ("pause > 0");
	return 0;
}
