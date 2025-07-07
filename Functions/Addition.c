//Addition Using a User-Defined Function
#include <stdio.h>

int addNum(int a, int b); //function prototype/Declaration

int main()
{
    int num1, num2, sum;

    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);

    sum = addNum(num1, num2); //function call

    printf("Sum = %d\n", sum);

    return 0;
}

int addNum(int a, int b) //function definition
{
    int result;
    result = a + b;
    return result; //return statement
}


/*
output:
Enter num1:5    
Enter num2:10
Sum = 15
*/