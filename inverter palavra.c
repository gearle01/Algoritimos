#include <stdio.h>

 void
main ()
{
  
 
 
int x, y, tam;
  
char palavra[15];
  
printf ("Informe uma palavra: ");
  
gets (palavra);
  
tam = strlen (palavra);
  
printf ("\n A palavra invertida é: ");
  
for (x = tam - 1; x >= 0; x--)
    
printf ("%c", palavra[x]);

 
}
