#include <stdio.h>

void compute(int a,int b,int*sum,int*prod,int*avg);


int main()
{  int a=4,b=1,sum,prod,avg;
    compute(a,b,&sum,&prod,&avg);
    printf("sum=%d\n,prod=%d\n,avg=%d\n",sum,prod,avg);
    return 0;
    

}

 void compute(int a,int b,int*sum,int*prod,int*avg)
 {
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;

 }