/*
 * Author: Andris Buscariolli
 * Date: 19/06/2020
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *num, c;
    int count;

    num = malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1);

    for(int i = 0; i < 10; i++) {
        count = 0;
        for(int j = 0; j < strlen(num); j++) {
            if(num[j] == i+48)
                count++;
        }
        printf("%d ", count);
    }

    return 0;
}