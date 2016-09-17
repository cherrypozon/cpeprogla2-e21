#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], yesno;
int n, flag, picked, result;

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int result);
char answer(char yesno);

void problem1() {
cout<<"\n*******************************STRING COMPARE*******************************\n";
cin.ignore();

cout << "Enter a first word (str1): ";
  	cin >> str1;
  	cout << "Enter a second word (str2): ";
  	cin >> str2;
  	
	
  	result = strcmp(str1,str2);
  	
  
  	switch (strcmp(str1,str2)){
  		case -1: 
  			cout << "\nNEGATIVE";
  			break;
  		case 1:
  			cout << "\nPOSITIVE";
  			break;
		case 0:
			cout << "\nEQUAL";
			break;
}
}

void problem2() {
cout<<"\n*******************************STRING COPY*******************************\n";
cin.ignore();

		cout << "Enter first word: ";
	  	cin >> str1;
	   	cout << "Enter second word: ";
	  	cin >> str2;
	  	cout << "\nNew string value for str1: " << strcpy(str1,str2);
	}
	
	void problem3() {
	cout<<"\n*******************************STRING CONCATENATION*******************************\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2) << endl;
	
}

void problem4() {
cout<<"\n*******************************PALINDROME*******************************\n";
	cin.ignore();

	cout << "Enter a word: ";
	cin >> str1;
	strlwr(str1);
	n = strlen(str1);
	for (int i = 0; i < n; i++)
	{
		if (str1[i]!= str1[n-i-1])
		{
			flag =1;
			break;
		}
	}
	
	if (flag)
		cout << "The word " << str1 << " is not a palindrome.";
	
	else
		cout << "The word " << str1 << " is a palindrome.";
}

void problem5() {
cout<<"\n*******************************CAPITALIZATION********************************\n";
	cin.ignore();

cout<<"Enter string: ";
 	gets(str1);
 	strlwr(str1);
 	str1[0]-=32;
 	for(int i=1;i<strlen(str1);i++){
 		if(str1[i]==' ')
 		str1[i+1]-=32;
 
 	}
 	puts(str1);
}

void problem6() {
cout<<"\n*******************************REVERSE VERTICAL ORDER********************************\n";
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
	if (word[i]==32) {
	int j=i+1;
	while(word[j]!=32&&j<n) {
	cout<<word[j];
	j++;
	}
	cout<<endl;
	}
	}
	int k=0;
	while(word[k]!=32) {
	cout<<word[k];
	k++;
}
}

int choose(int picked) {
	cout<<"Choose a problem # to solve [1-6]: ";
	cin>>picked;
	switch(picked) {
	case 1:
		problem1();
		answer(yesno);
		break;
	
	case 2:
		problem2();
		answer(yesno);
		break;
		
	case 3:
		problem3();
		answer(yesno);
		break;
	case 4:
		problem4();
		answer(yesno);
		break;
	case 5:
		problem5();
		answer(yesno);
		break;
	case 6:
		problem6();
		answer(yesno);
	break;
	default:
		cout << "You entered an invalid value.";
	break;
	}
	return picked;
	}

char answer(char yesno) {
cout<<"\n*******************************\nSolve another problem? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
	system("cls");
	choose(picked);
	}
}


main() {
choose(picked);
}

