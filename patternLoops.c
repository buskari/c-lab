/*
 * Author: Andris Buscariolli
 * Date: 06/05/2020
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int end = (2*n-1); // this is the size of the matrix
  	
    for(int i=1; i<=end; i++) {
        for(int j=1; j<=end; j++) {
            if(i+j<end+1){ //this takes every number above the foward diagonal
                if(i<j)
                    printf("%d ", n-(i-1));
                else
                    printf("%d ", n-(j-1));
            } else if (i+j==end) { //this takes every number of the foward diagonal
                if(i>j)
                    printf("%d ", n-j);
                else
                    printf("%d ", n-i);
            } else { // this takes everyone else
                if(i>j)
                    printf("%d ", n-(end-i));
                else
                    printf("%d ", n-(end-j));
            }

        }
        printf("\n");
    }

    return 0;
}