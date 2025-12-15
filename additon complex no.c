#include <stdio.h>
struct complex{
    float real  ;
    float img  ;
};
int main()
{
 struct complex c1,c2,sum;
 
  
printf("enter two real numbers :\n");
scanf("%f%f",&c1.real,&c2.real);

printf("enter two imaginary real numbers :\n");
scanf("%f%f",&c1.img,&c2.img);

 sum.real=c1.real+c2.real;
  sum.img=c1.img+c2.img;
  printf("the addition of two real number are :%.2f \n",sum.real);
  printf("the addition of two imaginary number are :%.2f \n",sum.img);
  
printf("the addition of two complex no. are :%.2f \n",sum.real+sum.img);


 

    return 0;
}


