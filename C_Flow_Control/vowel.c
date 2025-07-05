//program to find character is vowel or consonant
#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if(ch == 'a'||ch == 'e' ||ch == 'i'||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' || ch == 'U'){
        printf("%c is a Vowel\n", ch);
    }
    else{
        printf("%c is consonant\n", ch);
    }
    return 0;
}