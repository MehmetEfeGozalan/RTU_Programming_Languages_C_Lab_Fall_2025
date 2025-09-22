#include <stdio.h>
#include <math.h>
/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    if (n < 2) return 0;
    int newn = sqrt(n);
    // TODO: check if n is prime using loop up to sqrt(n)
    for (int i=2; i<=newn;i++){
        if (n%i==0) return 0;
    }
    return 1; // placeholder
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);
    if (n<2){ printf("You entered an unvalid value");}
    else{
        for (n; n>=2 ;n--){
    int m = is_prime(n);
    if (m == 1){
    printf("%d\n",n);}}
    }
    // TODO: validate input and print all primes up to n
    return 0;
}
