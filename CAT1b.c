/*
Write a cprogram to get the employee information name,age,position and Date of joining. Print the employee list based on Alphabaetical order. Display the order of the employees based on date of joining.

SAMPLE INPUT MODEL:

Enter the number of employees: 3
Enter details of employee 1:
Name: Jane
Age: 34
Position: HR
Date of joining (dd/mm/yyyy): 10/2/2000
Enter details of employee 2:
Name: Amie
Age: 23
Position: Sales
Date of joining (dd/mm/yyyy): 12/03/2004
Enter details of employee 3:
Name: Balu
Age: 45
Position: Security
Date of joining (dd/mm/yyyy): 1/1/1998

SAMPLE OUTPUT MODEL:

Employee List sorted by name:

Name: Amie
Age: 23
Position: Sales
Date of Joining: 12/03/2004

Name: Balu
Age: 45
Position: Security
Date of Joining: 1/1/1998

Name: Jane
Age: 34
Position: HR
Date of Joining: 10/2/2000

 

Employee List sorted by date of joining:

Name: Balu
Age: 45
Position: Security
Date of Joining: 1/1/1998

Name: Jane
Age: 34
Position: HR
Date of Joining: 10/2/2000

Name: Amie
Age: 23
Position: Sales
Date of Joining: 12/03/2004
 

PUBLIC TEST CASE:

3

Jane
34
HR
10/2/2000

Amie
23
Sales
12/03/2004

Balu
45
Security
1/1/1998

OUTPUT:

Employee List sorted by name:

Amie
23
Sales
12/03/2004

Balu
45
Security
1/1/1998

Jane
34
HR
10/2/2000

 

Employee List sorted by date of joining:

Balu

Jane

Amie
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 50

struct employee {
    char name[50];
    int age;
    char position[50];
    char doj[11];
};

int compare_by_name(const void* a, const void* b) {
    struct employee* emp1 = (struct employee*)a;
    struct employee* emp2 = (struct employee*)b;
    return strcmp(emp1->name, emp2->name);
}

int compare_by_doj(const void* a, const void* b) {
    struct employee* emp1 = (struct employee*)a;
    struct employee* emp2 = (struct employee*)b;
    int doj1[3], doj2[3];
    sscanf(emp1->doj, "%d/%d/%d", &doj1[0], &doj1[1], &doj1[2]);
    sscanf(emp2->doj, "%d/%d/%d", &doj2[0], &doj2[1], &doj2[2]);
    if (doj1[2] == doj2[2]) {
        if (doj1[1] == doj2[1]) {
            return doj1[0] - doj2[0];
        }
        return doj1[1] - doj2[1];
    }
    return doj1[2] - doj2[2];
}

int main() {
    struct employee emp_list[MAX_EMPLOYEES];
    int num_employees;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Get details of all employees
    for (int i = 0; i < num_employees; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp_list[i].name);
        printf("Age: ");
        scanf("%d", &emp_list[i].age);
        printf("Position: ");
        scanf("%s", emp_list[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", emp_list[i].doj);
    }

    // Sort by name
    qsort(emp_list, num_employees, sizeof(struct employee), compare_by_name);
    printf("\nEmployee List sorted by name:\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Name: %s\n", emp_list[i].name);
        printf("Age: %d\n", emp_list[i].age);
        printf("Position: %s\n", emp_list[i].position);
        printf("Date of Joining: %s\n\n", emp_list[i].doj);
    }

    // Sort by date of joining
    qsort(emp_list, num_employees, sizeof(struct employee), compare_by_doj);
    printf("\nEmployee List sorted by date of joining:\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Name: %s\n", emp_list[i].name);
    }

    return 0;
}

