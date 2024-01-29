#include<stdio.h>
#include<conio.h>
int mul(int num1 ,int num2)
{
    return num1*num2;
}
int main()
{
    int a,b;
    printf ("Enter any two numbers:\n");
    scanf("%d %d", &a,&b);
    printf("the multiplication is = %d",mul(a,b));
    return 0;

}