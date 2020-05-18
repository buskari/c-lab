#include <stdio.h>

int main() 
{
    const int MAX_LEN = 100;

    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c%*c", &ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]", sen);

    printf("\n%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}