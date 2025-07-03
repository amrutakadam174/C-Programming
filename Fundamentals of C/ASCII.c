// Program to find ASCII value of a character entered by user

#include<stdio.h>

int main(){
    char c;
    printf("Enter a Character:");
    scanf("%c", &c);
    printf("ASCII value of %c = %d\n", c, c);
    
    return 0;
}
