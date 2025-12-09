#include <stdio.h>
int main() {

   void  printHW(int n);

   printHW(5);
   return 0;

} 
   void printHW(int n){
    if(n==0){
     return;
    }
     
    printf("helloworld\n");
     printHW(n-1);

    }