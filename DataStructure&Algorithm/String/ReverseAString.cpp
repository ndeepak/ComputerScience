//Reversing a String
#include<iostream>
using namespace std;
int main(){
	char A[]="Nepal";
	char B[6];
	int i;
	for(i=0;A[i]!='\0';i++){
		
	}
	i-=1;
	int j;
	for(j=0;i>=0;i--,j++){
		B[j]=A[i];
	}
	B[j]='\0';
	cout<<A<<endl;
	cout<<B;
	return 0;
}
