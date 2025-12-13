#include <stdio.h>
#include <string.h>

#define MAX 100 


struct Student {
    int id;
    char name[50];
    float marks;
};


void addStudent(struct Student s[], int *count);
void displayStudents(struct Student s[], int count);
void searchStudent(struct Student s[], int count);

int main() {
    struct Student students[MAX];
    int choice;
    int count = 0; 

    do {
       
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

// Function to add a student
void addStudent(struct Student s[], int *count) {
    if (*count >= MAX) {
        printf("Cannot add more students. Maximum reached.\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &s[*count].id);

    printf("Enter Name: ");
    scanf("%s", s[*count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student s[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nID\tName\tMarks\n");
    printf("-------------------------\n");
    for(int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].marks);
    }
}


void searchStudent(struct Student s[], int count) {
    if (count == 0) {
        printf("No students in the system.\n");
        return;
    }

    int searchId;
    printf("Enter Student ID to search: ");
    scanf("%d", &searchId);

    for(int i = 0; i < count; i++) {
        if (s[i].id == searchId) {
            printf("Student Found: ID=%d, Name=%s, Marks=%.2f\n", s[i].id, s[i].name, s[i].marks);
            return;
        }
    }

    printf("Student with ID %d not found.\n", searchId);
}
