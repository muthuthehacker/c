#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter Your choice");
    scanf("%d", &choice);
    printf("Enter any two values \n");
    scanf("%d%d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("The sum of result %d \n", a + b);
        break;

    case 2:
        printf("The sum of result %d \n", a - b);
        break;
    }
}