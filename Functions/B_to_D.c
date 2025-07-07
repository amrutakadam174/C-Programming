//convert number binary to decimal

#include<stdio.h>
#include<math.h>

int btod(long n);

int main() {
    long n;

    printf("\nEnter Binary number:");
    scanf("%d", &n);

    printf("\nResult is = %d", btod(n));

    return 0;
}

//function defination
int btod(long n) {
    int i = 0, rem, dec = 0;

    while (n != 0) {
        rem = n % 10; // get last digit
        n /= 10; // remove last digit
        dec = dec + rem * pow(2, i); // convert to decimal
        i++;
    }

    return dec;
}