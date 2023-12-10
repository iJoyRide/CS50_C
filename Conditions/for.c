#include <stdio.h>

int main(void){
    
    int i, count;

    printf("How many times should i meow for? \n");
    scanf("%d", count);

    for (i = 0; i < count; i++)
    {
        printf("meow\n");
    }

    return 0;
}