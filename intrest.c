#include <stdio.h>

float interst(float n);

float interst(float n){
printf("total value is :%f\n",n+(n*0.18));
return n*0.18;}

int main()
{
    float value;
    printf("enter the value:\n");
    scanf("%f",&value);
    
    interst(value);
    

    return 0;
}
