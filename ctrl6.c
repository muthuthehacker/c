#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter Your choice \n");
    scanf("%d",&choice);
    printf("Enter any two values \n");
    scanf("%d%d",&a,&b);

    if(choice==1)
    {
        printf("The sum of result %d \n",a+b);
    }
    else if(choice==2)
    {
        printf("The sum of result %d \n",a-b);
    }
    else if(choice==3)
    {

        printf("The sum of result %d \n", a*b);
    }
    else if(choice==4)
    {
        printf("The sum of result %d \n", a/b);
    }
    else{
        printf("Wrong Value ! ,please choose value range for 1 to 4");
    }
}