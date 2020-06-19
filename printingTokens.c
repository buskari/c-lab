/*
 * Author: Andris Buscariolli
 * Date: 19/06/2020
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(int i = 0; i <= strlen(s); i++) {
        if(i == strlen(s))
            break;

        if(s[i] == ' ') 
            printf("\n");
        else
            printf("%c", s[i])
    }

    return 0;
}