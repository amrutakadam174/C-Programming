//program to solve Tower of Hanoi using Recursion

#include <stdio.h>

int n; // Number of disks
char from, to, aux; // Pegs: from (source), to (destination), aux (auxiliary)

// Function prototype
void towerofHanoi(int n, char from, char to, char aux) {
    if(n ==1) {
        printf("Move disk 1 from %c to %c \n", from, to);
        return;
    }
    // Recursive calls
    towerofHanoi(n -1, from, aux, to); // Move n-1 disks from source to auxiliary
    printf("Move disk %d from %c to %c\n", n, from, to); // Move nth disk from source to destination
    towerofHanoi(n -1, aux, to, from); // Move n-1 disks from auxiliary to destination
}

int main() {
    
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerofHanoi(n, 'A', 'C', 'B'); // 'A' is source, 'C' is destination, 'B' is auxiliary

    return 0;
}