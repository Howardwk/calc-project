#include <stdio.h>

// Define the structure
struct students {
    char name[50];  // Assuming names are at most 50 characters long
    int reg_number;
};
struct units
{
 char name[50];   /* data */
};


int main() {
    // Declare variables of type 'students'
    struct students student1, student2;
    struct units name1, name2;
   
    // Input details for student 1
    printf("Enter name of student 1:");
    scanf("%s", student1.name);
    printf("Enter registration number of student 1: ");
    scanf("%d", &student1.reg_number);
    printf("Enter unit name of student 1: ");
    scanf("%s", &name1.name);

    // Input details for student 2
    printf("Enter name of student 2: ");
    scanf("%s", student2.name);
    printf("Enter registration number of student 2: ");
    scanf("%d", &student2.reg_number);
    printf("Enter unit name of student 2: ");
    scanf("%s", &name2.name);

    // Output details of both students
    printf("\nDetails of student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Registration Number: %d\n", student1.reg_number);
    printf("Unit: %s\n",name1.name);

    printf("\nDetails of student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Registration Number: %d\n", student2.reg_number);
    printf("Unit: %s\n",name2.name);

    return 0;
}
