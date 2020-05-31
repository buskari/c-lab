#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int value=n;
  	
    for(int i=1; i <= (2*n-1); i++) {
        for(int j=1; j <= (2*n-1); j++) {
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
