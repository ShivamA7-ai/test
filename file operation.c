#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fp;

	char buffer[100];

	fp=fopen("sample.txt","w");

	if(fp==0) {
		printf("error while opening file!\n");
		return 1;             
	}

	fprintf(fp,"hello shivam.\n");

	fclose(fp);

	printf("data written and file closed successfully.\n");

	fp=fopen("sample.txt","r");

	if(fp==NULL) {
		printf("error opening file reading!\n");
		return 1;

	}

	printf("\n Reading file content:\n");

	while(fgets(buffer,sizeof(buffer),fp)!=NULL) {
		printf("%s",buffer);

	}

	fclose(fp);


	printf("\nFile closed successfully.\n");



	return 0;
}
