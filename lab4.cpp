#include<iostream>
#include<cstring>
using namespace std;
int flag=0, n=0, x=0, picked;
char str1[100], str2[100], str[100], *s1, *s2, yesno;

void mySTRCPY();
void mySTRCMP();
void mySTRCAT();
int mySTRLEN(char*);
int choose(int picked);
char answer(char yesno);
char myREV(char*str);

void mySTRCPY() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	*s1=*s2;
    cout<<str1[i];
}  
}

void mySTRCMP() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    if (*s1==*s2) flag+=0;
	else if (*s2<*s1) flag+=1;
	else if (*s2>*s1) flag-=1;
}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void mySTRCAT() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    s1=&str1[i];
    cout<<*s1;
}
for(int i=0;i<strlen(str2);i++){
    s2=&str2[i];
    cout<<*s2;
}
}

int mySTRLEN(char*s1){
cout<<"\nEnter a string:  ";
cin.ignore();
    gets(str1);
while(*s1!='\0') {
x++;
s1++;
}
cout<<"The length of the string is: "<<x;
return x;
}

char myREV(char*str) {
cout<<"\nEnter a string: ";
cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	n=strlen(str);
	for(int i=n-1;i>=0;i--) {
	cout<<str[i];
	}
}

int choose(int picked) {
	cout << "\n[1] String Copy\n[2] String Compare\n[3] String Concatenation\n[4] String Length\n[5] String Reversing";
	cout << endl;
	cout<<"Choose a problem # to solve [1-5]: ";

	cin>>picked;
	
	switch(picked) {
	case 1:
	mySTRCPY();
	answer(yesno);
	break;
	case 2:
	mySTRCMP();
	answer(yesno);
	break;
	case 3:
	mySTRCAT();
	answer(yesno);
	break;
	case 4:
	mySTRLEN(str1);
	answer(yesno);
	break;
	case 5:
	myREV(str1);
	answer(yesno);
	break;
	default:
	cout << "Wrong Input \n";
	break;
}
	return picked;
}

	char answer(char yesno) {
	cout<<"\n\nTry Again [y/n] ";
	cin>>yesno;
	if (yesno=='y' || yesno =='Y') {
	system("cls");
	choose(picked);
}
	
}



int main() {
choose(picked);
}
