/*
 * Author: Andris Buscariolli
 * Date: 14/06/2020
 * Source: HackerRank.com
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *arrAux;
    scanf("%d", &num);

    int count = num-1; 
    arr = (int*) malloc(num * sizeof(int));
    arrAux = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0; i < num; i++) 
        arrAux[i] = arr[i];

    for(i = 0; i < num; i++) {
        arr[i] = arrAux[count];
        count--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}