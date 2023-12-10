#include <stdio.h>


int get_int(void){
    int x;
    printf("enter a value: \n");
    scanf("%d", &x);
    return x;
}

int get_size(void){

    int n;
    do
    {
        n = get_int();
    } while (n < 1);
    return n;
    
}

void print_grid(int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int main (void){
    // Get size of grid
    int n = get_size();

    //Print grid of bricks
    print_grid(n);

}

// gcc function.c -o function