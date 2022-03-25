#include <stdio.h>
#include <cs50.h>
int valid_traingle(int a , int b , int c);
int main(void)
{
    int a,b,c;
    char A;
    printf("Enter the first side of your traingle(a)");
    scanf("%i", &a);
    printf("Enter the second side of your traingle(b)");
    scanf("%i", &b);
    printf("Enter the third side of your traingle(c)");
    scanf("%i", &c);
    A = valid_traingle(a,b,c);
    printf("%c", A);
    return 0;
}
int valid_traingle(int a, int b, int c)
{
    if(a + b <= c || b + c <= a)
    { 
        printf("That can't be  a traingle");
        return 1;
    }
    else if( a <= 0 || b<=0 || c <=0)
    { 
        printf("That can't be a traingle.");
        return 1;
    }
    else
    { 
        printf("That is traingle");
        return 0;
    }
}