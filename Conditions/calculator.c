#include <stdio.h>

int get_int(void){
    int x;
    printf("enter a value: \n");
    scanf("%d", &x);
    return x;
}

int get_long(void){
    long x;
    printf("enter a value: \n");
    scanf("%i", &x);
    return x;
}


int main(void){
    long x = get_long();

    long y = get_long();

    printf("%i \n", x + y);
    printf("%i \n", x - y);
    printf("%i \n", x * y);
    printf("%f \n", x / y);

}