/*
 * TASK
 * Given set S={1, 2, 3,...,n}, find:
 *       the maximum value of a AND b which is less than a given integer k, where a and b (where a < b) are two integers from set S.
 *       the maximum value of a OR b which is less than a given integer k, where a and b (where a < b) are two integers from set S.
 *       the maximum value of a XOR b which is less than a given integer k, where a and b (where a < b) are two integers from set S.
 * 
 * *CONSTRAINTS
 *       2 <= n <= 10ˆ3
 *       2 <= k <= n
 * 
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int constraints(int n, int k);
void calculate_the_maximum(int n, int k);


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);

    if(constraints(n, k))
        printf("Ok!");
    else
        printf("Not ok!");
    
    // calculate_the_maximum(n, k);
 
    return 0;
}

int constraints(int n, int k) {
    if(n >= 2 && n <= 1000 && k <= n)
        return 1;
    else
        return 0;
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.
}
