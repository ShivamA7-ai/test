#include <stdio.h>
int main()
{ int age;
printf("enter your age: ");
scanf("%d",&age);

if(age>18){
	printf("you are an adult.you are eligible to vote");
	
}
  
  else if( age <18){
    printf("you are not an adult.so you are not eligible to vote");
    
}

  else{
  	printf("you entered invalid age !");
  	
  } 
    return 0;
}
