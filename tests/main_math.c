#include <stdio.h>
#include "math_utils.h"

int main()
{
    printf("=========== PRIME TEST ===========\n");
    int p = 7;
    printf("Is %d prime? -> %d\n", p, isPrime(p));


    printf("\n=========== FACTORIAL TEST ===========\n");
    int f = 5;
    printf("Factorial of %d -> %d\n", f, factorial(f));


    printf("\n=========== FIBONACCI TEST ===========\n");
    int n = 10;
    printf("Fibonacci sequence till %d:\n", n);
    int fib = fibonacci(n, 1);
    printf("\nNth Fibonacci -> %d\n", fib);


    printf("\n=========== GCD TEST ===========\n");
    int a = 48;
    int b = 18;
    printf("GCD(%d, %d) -> %d\n", a, b, gcd(a, b));


    printf("\n=========== LCM TEST ===========\n");
    printf("LCM(%d, %d) -> %d\n", a, b, lcm(a, b));


    printf("\n=========== REVERSE NUMBER TEST ===========\n");
    int num = 12345;
    printf("Reverse of %d -> %d\n", num, reverseNumber(num));


    printf("\n=========== PALINDROME TEST ===========\n");
    int pal = 121;
    printf("Is %d palindrome? -> %d\n", pal, isPalindromeNumber(pal));


    printf("\n=========== SUM OF DIGITS TEST ===========\n");
    int digitNum = 9876;
    printf("Sum of digits of %d -> %d\n", digitNum, sumOfDigits(digitNum));


    printf("\n=========== POWER TEST ===========\n");
    int base = 2;
    int exp = 10;
    printf("%d^%d -> %d\n", base, exp, power(base, exp));


    printf("\n=========== NUMBER OF DIGITS TEST ===========\n");
    int digits = 123456;
    printf("Digits in %d -> %d\n", digits, numberOfDigits(digits));


    printf("\n=========== ARMSTRONG TEST ===========\n");
    int arm = 153;
    printf("Is %d Armstrong? -> %d\n", arm, isArmstrong(arm));


    printf("\n=========== MULTIPLE TESTS ===========\n");

    printf("Prime(1) -> %d\n", isPrime(1));
    printf("Prime(2) -> %d\n", isPrime(2));
    printf("Prime(10) -> %d\n", isPrime(10));

    printf("Reverse(1000) -> %d\n", reverseNumber(1000));

    printf("Armstrong(370) -> %d\n", isArmstrong(370));
    printf("Armstrong(371) -> %d\n", isArmstrong(371));
    printf("Armstrong(407) -> %d\n", isArmstrong(407));

    return 0;
}
