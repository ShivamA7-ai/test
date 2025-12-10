
#include <stdio.h>
#include <string.h>

struct student{
    char *name;
    int rollno;
    int age;
    float marks;
    
};

int main()
{
    int i=0,n=5;
    
   struct student student[n];
   
   student[0].name="rahul";
   student[0].rollno=1;
   student[0].age=18;
   student[0].marks=80;
   
   student[1].name="ram";
   student[1].rollno=2;
   student[1].age=18;
   student[1].marks=81;
   
   student[2].name="sam";
   student[2].rollno=3;
   student[2].age=18;
   student[2].marks=83;
   
   student[3].name="mani";
   student[3].rollno=4;
   student[3].age=18;
   student[3].marks=84;
   
   student[4].name="manasi";
   student[4].rollno=5;
   student[4].age=19;
   student[4].marks=82;
   
   for(int i=0;i<5;i++){
       printf("%s\n",student[i].name);
        printf("%d\n",student[i].rollno);
         printf("%d\n",student[i].age);
          printf("%f\n",student[i].marks);
       }

    return 0;
}
