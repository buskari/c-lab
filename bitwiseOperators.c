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

int convertToBinary(int n, int i);
int compare_and_transform(int i, int j, char op);
int convertToInt(int bit, int i);
void calculate_the_maximum(int n, int k);


int main() {
    int n, k, and, or, xor;
  
    scanf("%d %d", &n, &k);

    if(n >= 2 && n <= 1000 && k <= n) // check the constraints
        calculate_the_maximum(n, k);
    else
        printf("The first number be in the interval 2-10^3 and the second must be <= than the first");
    
    return 0;
}
int convertToBinary(int n, int i) {
    static int binary[10];
    
    for(int i=9; i>=0; i--) {
        binary[i] = n % 2;
        n /= 2;
    }

    return binary[i];
}

int convertToInt(int bit, int i) {
  int ans=0;

  if(bit==1)
     ans = pow(2,i);

  return ans;
}

int compare_and_transform(int i, int j, char op) {
    int bin[10], index=9, dec=0;

    for(int l=0; l<10; l++) {
        switch (op) {
        case 'o':
            if(convertToBinary(i,l)==1 || convertToBinary(j,l)==1)
                bin[l] = 1;
            else
                bin[l] = 0;
        break;

        case 'x':
            if(convertToBinary(i,l)==1 != convertToBinary(j,l)==1)
                bin[l] = 1;
            else
                bin[l] = 0;

        break;

        default:
            if(convertToBinary(i,l)==1 && convertToBinary(j,l)==1)
                bin[l] = 1;
            else
                bin[l] = 0;
          break;

        }

        dec += convertToInt(bin[l], index);
        index--;
    }

    return dec;
}

void calculate_the_maximum(int n, int k) {
    
    int index=0, andSet[(n*(n-1)/2)], orSet[(n*(n-1)/2)], xorSet[(n*(n-1)/2)], finalAns[3];

    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
          andSet[index] = compare_and_transform(i,j,' ');
          orSet[index] = compare_and_transform(i,j,'o');
          xorSet[index] = compare_and_transform(i,j,'x');
          index++;            
        }
    }

    finalAns[0] = andSet[0];
    finalAns[1] = orSet[0];
    finalAns[2] = xorSet[0];

    for (int i=1; i<(n*(n-1)/2); i++) {
        if(andSet[i]>finalAns[0] && andSet[i]<k)
            finalAns[0] = andSet[i];

        if(orSet[i]>finalAns[1] && orSet[i]<k)
            finalAns[1] = orSet[i];

        if(xorSet[i]>finalAns[2] && xorSet[i]<k)
            finalAns[2] = xorSet[i];
    }

    printf("%d\n%d\n%d\n", finalAns[0], finalAns[1], finalAns[2]);
}