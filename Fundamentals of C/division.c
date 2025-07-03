#include<stdio.h>
int main(){
    int divident, divisor, quotient, remainder;

    printf("Enter divident:");
    scanf("%d", &divident);
    printf("Enter divisor:");
    scanf("%d", &divisor);
    
    if(divisor == 0){
        printf("Error: Division by Zero not allowed");
        return 1;
    }
    quotient = divident / divisor;
    remainder = divident % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}