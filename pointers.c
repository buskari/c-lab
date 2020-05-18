/*
 * Author: Andris Buscariolli
 * Purpose: update the values of two integers through pointers
 * Date: 18/05/2020
*/


#include <stdio.h>

void update(int *a, int *b);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb); // this function receives two arguments (pointers pa, pb) and updates de values of the original variables 'a' and 'b' with the operators + and - 
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a,int *b) {
    int prev_a = *a;

    *a += *b;
    *b -= prev_a;

    if(*b < 0)
        *b *= -1;  
}