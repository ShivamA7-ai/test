#include <stdio.h>
#include <string.h>  // needed for strcpy if you assign later

int main() {
    struct student {
        char name[100];
        int roll;
        float cgpa;
    };

    struct student s1 = {"shivam", 69, 8.8};
    struct student s2 = {"priyanshu", 129, 7.5};  // fixed semicolon

    struct student *ptr = &s1;
    printf("%d\n", (*ptr).roll);

    // Example of assigning name later:
    // strcpy(s1.name, "newname");

    return 0;
}
