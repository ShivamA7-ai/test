#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[100];
	char str2[100];
	
	printf("Enter a string: ");
	fgets(str1,sizeof(str1),stdin);
		int length1=strlen(str1);
	
	str1[strcspn(str1,"\n")]='\0';
	
	
	printf("Enter a string: ");
	fgets(str2,sizeof(str2),stdin);
	int length2=strlen(str2);
	
	str2[strcspn(str2,"\n")]='\0';
	int cmp = strcmp(str1,str2);
	
	if(cmp==0){
		printf("strings are equal.\n");
	}
	else if(cmp<0){
		printf("str1 is smaller.\n");
	}
	else{
		printf("str1 is gretter.\n");
	}
	
	return 0;
	

	
	
	
}
