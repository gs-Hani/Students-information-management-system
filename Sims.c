#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Level 1
void addStudent(void);

//Defining variables
//==================

// Variable to keep track of number of students
int i = 0;
// Structure to store the student
struct sInfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cID[10];
} st[55];

//=======
//Level 0
//=======
void main()

{
    int choice, count;
    while (1) {

        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the student details by roll number\n");
        printf("3. Find the student details by first name\n");
        printf("4. Find the student details by course ID\n");
        printf("5. Find the total number of students\n");
        printf("6. Delete the students details  by roll number\n");
        printf("7. Update the students details by roll number\n");
        printf("8. To exit\n");
        printf("Enter your choice to find the task\n");

	scanf("%d", &choice);

        switch (choice) {
        case 1:
           addStudent();
            break;
       // case 2:
       //     find_rl();
       //     break;
       // case 3:
       //     find_fn();
       //     break;
       // case 4:
       //     find_c();
       //     break;
       // case 5:
       //     tot_s();
       //     break;
       // case 6:
       //     del_s();
       //     break;
       // case 7:
       //     up_s();
       //     break;
        case 8:
            exit(0);
            break;
        }
    }
}

//=======
//Level 1
//=======

void addStudent () {
	printf("Add the Students Details\n");
    	printf("-------------------------\n");

    	printf("Enter the first name of student\n");
    	scanf("%s", st[i].fname);

    	printf("Enter the last name of student\n");
    	scanf("%s", st[i].lname);
    
	printf("Enter the Roll Number\n");
    	scanf("%d", &st[i].roll);
    
	printf("Enter the CGPA you obtained\n");
    	scanf("%f", &st[i].cgpa);
    
	printf("Enter the course ID of each course\n");
    	for (int j = 0; j < 5; j++) {
        	scanf("%d", &st[i].cID[j]);
    	}

    	i = i + 1;
}
