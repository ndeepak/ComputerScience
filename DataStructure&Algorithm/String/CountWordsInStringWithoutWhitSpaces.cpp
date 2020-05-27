//Count Number of Words in String without whitespaces
#include<iostream>
using namespace std;
int main(){
	char A[]="Hello Nepalese,   How Are You"; // Five Words
	int i,word=0;
	for(i=0;A[i]!='\0';i++){
		if(A[i]==' ' && A[i-1]!=' '){
			word++;
		}
	}
	cout<<word+1;
	return 0;
}
