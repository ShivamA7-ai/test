#include <stdio.h>
int main(){

	 
	 int cgpa;
	 
	 
	 printf("enter your cgpa: ");
	 scanf("%f",&cgpa);
	 
	 if(cgpa>8){
	 	printf("Congrats,You got grade A+");
	 	
	 }
     else if(cgpa>6 && cgpa<=8){
     	printf("Congrats,You got grade A");
     	
	 } 
	 
	 else if(cgpa>4 && cgpa<=6){
	 	printf("Congrats, You passed with good marks");
	 	
	 }
	 
	 else if (cgpa<4 && cgpa>=0){
	 	printf("You got fail,Try next time");
	 }
	 
	 else{
	 	printf("You enterd invalid  cgpa!");
	 	
	 }
	 return 0;
	 
}
