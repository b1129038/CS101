#include <stdio.h>


int main(){
    int y=1;
    int x=1;
    
    while(y<=9){
        printf("%d*%d=%d\t",y,x,y*x);
        /*if(x<9){
            x++;
        }else{
            x=1;
            y++;
            printf("\n");
        }*/
        x<9 ? x++: (x=1, y++, printf("\n"));
    }
    
    return 0;
}
