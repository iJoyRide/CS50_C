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

    printf("%li \n", x + y);
    printf("%li \n", x - y);
    printf("%li \n", x * y);
    printf("%.20f \n", (float)x / (float)y);

}