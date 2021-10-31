//WAP a program using structures to read and display the 
//information about a student
#include<stdio.h>
#include<conio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];
    };
    struct student stud1;//here structure variable is stud1.
    clrscr();
    printf("\nEnter the roll number");
    scanf("%d",&stud1.roll_no);
    printf("\nEnter the name:-");
    scanf("%s",stud1.name);
    printf("\nEnter the fees:-");
    scanf("%d",&stud1.fees);
    printf("\nEnter the DOB");
    scanf("%s",stud1.DOB);
    printf("\n*******STUDENT DETAILS*******");
    printf("\nRoll No. =%d",stud1.roll_no);
    printf("\nName=%s",stud1.name);
    printf("\nFees=%f",stud1.fees);
    printf("\nDOB=%s",stud1.DOB);
    getch();
    return 0;
}