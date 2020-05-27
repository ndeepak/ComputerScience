//Converting UpperCaseLetter into LowerCase
#include<iostream>
using namespace std;
int main(){
	char A[]={"HELLONEPAL"};
	/*
	We know, ASCII Values for:
	A=65		a=97
	B=66        b=98
	.           .
	.           .
	.           .
	Z=90        z=122
	
	UpperCase-LoweCase=32
	*/
	int i;
	for(i=0;A[i]!='\0';i++){
		A[i]=A[i]+32;
	}
	cout<<A;
	return 0;
}
