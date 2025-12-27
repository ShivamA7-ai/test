#include <stdio.h>

int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100){
        printf("grade A");

    }
     else if(marks>=80 && marks<90){
        printf("grade B");

    }
    else if(marks>=70 && marks<80){
        printf("grade C");

    }
    else if(marks>=60 && marks<70){
        printf("grade D");

    }
    else{
        printf("grade F");
    }
    
}
