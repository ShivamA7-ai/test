#include <stdio.h>
#include <string.h>

struct person {
	char name[100];
	char  cityname[100];
	float salary;
	
};

int main(){
	struct person p1={ "shiv","pune",50000};
	struct person p2={ "sam","mumbai",60000};
	struct person p3={ "sahil","chennai",40000};
	
	printf("%s",p1.name);
	printf("%s",p1.cityname);
	printf("%.2f",p1.salary);
	printf("%s",p2.name);
	printf("%s",p2.cityname);
	printf("%.2f",p2.salary);
	printf("%s",p3.name);
	printf("%s",p3.cityname);
	printf("%.2f",p3.salary);
	
	return 0;
	
}
