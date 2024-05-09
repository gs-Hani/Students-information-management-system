#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Level 1
void addStudent(void);
void findRl(void);
void findFn(void);
void findC(void);
void totS(void);
void delS(void);
void upS(void);
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
        case 2:
            findRl();
            break;
        case 3:
            findFn();
            break;
        case 4:
            findC();
            break;
        case 5:
            totS();
            break;
        case 6:
            delS();
            break;
        case 7:
            upS();
            break;
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

// Find student by roll number
void findRl () {
	int x,y;

    	printf("Enter the Roll Number of the student\n");
    	scanf("%d", &x);

	for (int j = 0; j <= i; j++) {
        	if (x == st[j].roll) {
			y = j;
            		printf("The Students Details are\n");
            		printf("The First name is %s\n",st[j].fname);
            		printf("The Last name is %s\n",st[j].lname);
            		printf("The CGPA is %f\n",st[j].cgpa);
            		printf("Enter the course ID of each course\n");
        		for (int j = 0; j < 5; j++) {
            			printf("The course ID are %d\n",st[y].cID[j]);
        		}
			break;	
		}
    	}
}

// Find student by first name
void findFn () {
	char a[50];
	printf("Enter the First Name of the student\n");
    	scanf("%s", a);

    	int c = 0;
	int y;

	for (int j = 0; j <= i; j++) {
       		if (!strcmp(st[j].fname, a)) {
			y = j;
			printf("The Students Details are\n");
            		printf("The First name is %s\n",st[j].fname);
            		printf("The Last name is %s\n",st[j].lname);
            		printf("The Roll Number is %d\n ",st[j].roll);
            		printf("The CGPA is %f\n",st[j].cgpa);
            		printf("Enter the course ID of each course\n");
			for (int j = 0; j < 5; j++) {
                		printf("The course ID are %d\n",st[y].cID[j]);
            		}
            		c = 1;
        	}		
        	else
            	printf("The First Name not Found\n");
    	}
}

// Find students in a course
void findC() {
	int id;
    	printf("Enter the course ID \n");
    	scanf("%d", &id);

    	int c = 0;
	int y;

	for (int j = 0; j <= i; j++) {
        	for (int d = 0; d < 5; d++) {
            		if (id == st[j].cID[d]) {
 				printf("The Students Details are\n");
               	 		printf("The First name is %s\n",st[j].fname);
                		printf("The Last name is %s\n",st[j].lname);
                		printf("The Roll Number is %d\n ",st[j].roll);
                		printf("The CGPA is %f\n",st[j].cgpa);
 				c = 1;
				break;
            		}		
            		else
                		printf("The First Name not Found\n");
        	}
    	}
}

// Print total number of students
void totS() {
    printf("The total number of Student is %d\n",i);
    printf("\n you can have a max of 50 students\n");
    printf("you can have %d more students\n",50 - i);
}

// Delete student by roll number
void delS() {
    	int a;
    	printf("Enter the Roll Number which you want to delete\n");
    	scanf("%d", &a);
    	for (int j = 0; j <= i; j++) {
        	if (a == st[j].roll) {
            		for (int k = j; k < 49; k++)
                		st[k] = st[k + 1];
            			i--;
        	}
    	}
    	printf("The Roll Number is removed Successfully\n");
}

// Update student data
void upS() {
 
    printf("Enter the roll number to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. first name\n"
                   "2. last name\n"
                   "3. roll no.\n"
                   "4. CGPA\n"
                   "5. courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new "
                       "first name : \n");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter the new "
                       "last name : \n");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter the new "
                       "roll number : \n");
                scanf("%d", &st[j].roll);
                break;
            case 4:
                printf("Enter the new CGPA : \n");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter the new courses \n");
                scanf(
                    "%d%d%d%d%d", &st[j].cID[0],
                    &st[j].cID[1], &st[j].cID[2],
                    &st[j].cID[3], &st[j].cID[4]);
                break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
}
