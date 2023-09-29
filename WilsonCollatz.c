#include <stdio.h>
static int iterations = 0;

void termination(int n){
    int count = n;
    while (count != 1){
        if(count % 2 == 0){ // If n is even
            count = count / 2;
        } else { // Else if n is odd
            count = (3 * count) + 1;
        }
        iterations++;
        printf("Iteration #%d\n", iterations);
        printf("n = %d\n", count);
    }
}

int main() {
    printf("Enter an integer to test the collatz conjecture: ");
    int input;
    scanf("\n%d", &input);
    termination(input);
    return 0;
}