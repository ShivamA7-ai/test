#include <stdio.h>

void finalprice(int price[],int n);

int main(){
    int price[3]={100,200,300};
     finalprice(price,3);
     return 0;
     


}

 void finalprice(int price[],int n){
    for(int i=0;i<n;i++){
       float result=price[i]+price[i]*0.18f;
       printf("final pice of item %d is : %.2f\n",i+1,result);


    }


 }