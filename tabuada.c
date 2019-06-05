#include <stdio.h>

void main(){
   int i, num = 0;

   printf("Digite um número entre 1 e 10:");
   scanf("%d",&num);

   for (i = 1; i <= 10; ++i)
   {
       printf("%d X %d = %d\n",num, i, num * i);
   }
}
