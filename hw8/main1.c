#include <stdio.h>
int main() {   
    int rows=10;
    int i, space, k = 0;
    for (i=1; i<= rows; ++i, k=0) {
        for (space = 1; space <= rows - i; ++space)
            printf("  ");
        for(int k=0; k!=2*i-1; k++)
            printf("* ");
        printf("\n");
    }
   return 0;
}
