/*
 * Author: Andris Buscariolli
 * Date: 19/06/2020
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int count[10];
    char *num;
    num = malloc(1024 * sizeof(char));
    scanf("%[^\n]", num);
    num = realloc(num, strlen(num) + 1);

    for(int i = 0; i < 10; i++)
        count[i] = 0;

    for(int i = 0; i < strlen(num); i++) {
        switch (num[i]) {
        case '1':
            count[1]++;
            break;

        case '2':
            count[2]++;
            break;

        case '3':
            count[3]++;
            break;

        case '4':
            count[4]++;
            break;

        case '5':
            count[5]++;
            break;

        case '6':
            count[6]++;
            break;

        case '7':
            count[7]++;
            break;

        case '8':
            count[8]++;
            break;

        case '9':
            count[9]++;
            break;

        case '0':
            count[0]++;
            break;

        default:
            break;
        }
    }

    for(int i = 0; i < 10; i ++) 
        printf("%d ", count[i]);

    return 0;
}