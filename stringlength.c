#include <stdio.h>
#include <string.h>

int strlength(char str[]){
	int length=0;
	while(str[length]!='\0'){
		length++;
		
	}
	return length;
	
}

int main(){
	char string[100];
	
	printf("Enter string :");
	scanf("%s",string);
	
	strlength(string);
	int len=strlength(string);
	printf("length of the string is %d",len);
	return 0;
	
}