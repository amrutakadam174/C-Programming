/*Static Variables
A ststics vriable is declared by using static keyword.
the value of static variable is persist until the end of the program.
*/

#include <stdio.h>

void display();

int main() {
    display();
    display();
}

void display() {
    static int c = 1;
    c += 5;
    printf("Value of c: %d\n", c);

}