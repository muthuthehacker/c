#include<stdio.h>
int main()
{
    int a=1;
    int range;
    printf("Enter a Value range");
    scanf("%d",&range);
    while(a<=range)
    {
        printf("The sum of %d \n",a*10);
        a+=1;

    }
}