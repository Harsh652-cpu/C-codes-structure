#include<stdio.h>
#include<conio.h>
int main()
{
    struct numbers//Structure name is numbers here
    {
        int a,b,c;
        int largest;
    };
    struct numbers num;//structure variable is num
    clrscr();//To clear the screen
    printf("\nEnter the three numbers:-");
    scanf("%d %d %d",&num.a,&num.b,&num.c);
    if(num.a>num.b && num.a>num.c)
    {
        num.largest=num.a;
    }
    if(num.b>num.a && num.b>num.c)
    {
        num.largest=num.b;
    }
    if(num.c>num.a && num.c>num.b)
    {
        num.largest=num.c;
    }
    printf("\nThe largest number is:-%d",num.largest);
    getch();
    return 0;
}