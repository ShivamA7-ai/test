#include <stdio.h>
int main(){
	struct student{
		char name[100];
		int roll;
		float cgpa;
		
	};
	
	struct student s1={"shivam",69,8.8};   //we can also initialise it as s1.name="name"
	
	struct student s2={"priyanshu",129,7.5};//s1.roll=129
	printf("%s\n",s1.name);
	printf("%d\n",s1.roll);
	printf("%f\n",s1.cgpa);
	printf("%s\n",s2.name);
	printf("%d\n",s2.roll);
	printf("%f\n",s2.cgpa);
	
	return 0;
}
