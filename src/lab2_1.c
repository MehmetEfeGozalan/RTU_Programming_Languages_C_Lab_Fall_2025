#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int Sum=0; // TODO: implement sum with a for loop
    for (int i=1;i<=n;i++){
        Sum+=i;
    }
    return Sum; // placeholder
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int m = sum_to_n(n);
    printf("The summation of the numbers till n is= %d",m);
    // TODO: validate input, call function, and print result
    return 0;
}
