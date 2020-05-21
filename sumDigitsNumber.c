/*
 * Task
 * In this challenge, you have to input a five digit number and print the sum of digits of the number.
 * 
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int digit;
    int sum = 0;
    scanf("%d", &n);
    
    if(n >= 10000 && n <= 99999) { // checking constraints
        for(int i = 0; i < 5; i++) {
            digit = n % 10;
            n /= 10;
            sum += digit;
        }
        printf("%d", sum);
    } else
        printf("The number must be between 10000 and 99999");

    return 0;
}