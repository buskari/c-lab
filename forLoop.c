/*
 * Task:
 * For each integer n in the interval [a,b] (given as input) :
 *      If 1<= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
 *      Else if n > 9 and it is an even number, then print "even".
 *      Else if n > 9 and it is an odd number, then print "odd".
 * 
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


bool constraints(int a, int b); // check constraints
void checkValue(int value); 

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    if(constraints(a, b)) {
        for(; a <= b; a++) {
            checkValue(a);
        }
    } else 
        printf("The numbers must be >= 1 and <= 10^6 and the second number must be greater than the first");

    return 0;
}

bool constraints(int a, int b) {
    if((a >= 1 && a <= pow(10,6)) && (b >= 1 && b <= pow(10,6))){
        if(a <= b)
            return true;
        else
            return false;
    } else
        return false;
}

void checkValue(int value) {
    if(value==1)  
        printf("one\n");
    else if(value==2)
        printf("two\n");
    else if(value==3)
        printf("three\n");
    else if(value==4)
        printf("four\n");
    else if(value==5)
        printf("five\n");
    else if(value==6)
        printf("six\n");
    else if(value==7)
        printf("seven\n");
    else if(value==8)
        printf("eight\n");
    else if(value==9)
        printf("nine\n");
    else {
        if(value%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
}

