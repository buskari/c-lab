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
int convertToInt(int bit, int i);
void calculate_the_maximum(int n, int k);


int main() {
    int n, k;
  
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

void calculate_the_maximum(int n, int k) {
    
    int andBin[10], orBin[10], xorBin[10], index=9, orInt=0, andInt=0, xorInt=0, andSet[(n*(n-1))/2], orSet[(n*(n-1))/2], xorSet[(n*(n-1))/2], finalAns[3];

    for(int i=1; i<n; i++) {
        for(int j=i++; j<=n; j++) {
            for(int l=0; l<10; l++) {
                if(convertToBinary(i,l)==1 && convertToBinary(j,l)==1)
                    andBin[l] = 1;
                else
                    andBin[l] = 0;
                
                if(convertToBinary(2,l)==1 || convertToBinary(5,l)==1)
                    orBin[l] = 1;
                else
                    orBin[l] = 0;

                
                if(convertToBinary(i,l)==1 != convertToBinary(j,l)==1)
                    xorBin[l] = 1;
                else
                    xorBin[l] = 0;
            } 

            for(int l=0; l<10; l++) {
                andInt += convertToInt(andBin[l], index);
                orInt += convertToInt(orBin[l], index);
                xorInt += convertToInt(xorBin[l], index);
                index--;

                // andSet[l] = andInt;
                // orSet[l] = orInt;
                // xorSet[l] = xorInt;          
            }
            printf("%d", orInt);
            break;
        }
        break;
    }

    for(int l=0; l<10; l++)
        // printf("%d ", andSet[l]);

    for (int i=1; i<((n*(n-1))/2); i++) {
        if(andSet[i]>andSet[i-1])
            finalAns[0] = andSet[i];

        if(orSet[i]>orSet[i-1])
            finalAns[1] = andSet[i];

        if(xorSet[i]>xorSet[i-1])
            finalAns[2] = andSet[i];
    }
    
    // printf("%d\n%d\n%d\n", finalAns[0], finalAns[1], finalAns[2]);
}