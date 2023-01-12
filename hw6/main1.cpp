#include <stdio.h>

int main()
{
   int i = 10;
   if(i%3==0){
       printf("Love\n");
   }
   if(i%5==0){
       printf("IU\n");
   }
   if(i%15==0){
       printf("Love IU\n");
   }
   if(i%3!=0 && i%5!=0 && i%15!=0){
       printf("%d\n",i);
   }
    return 0;
}
