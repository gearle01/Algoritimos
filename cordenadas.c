#include <stdio.h>


void main(){
    
    int x;
    int y;
    printf("Digitre o a coordenada x\n");
    scanf("%d",&x);
     printf("Digitre o a coordenada y\n");
    scanf("%d",&y);
    
    if(x>0 && y>0){
        printf("A coordenada esta no 1º quadrante");
    }else if (x<0 && y>0){
        printf("A coordenada esta no 2º quadrante");
    }
    
    if(x<0 && y<0){
        printf("A coordenada esta no 3º quadrante");       
    } 
    if(x >0  && y <0){
        printf("A coordenada esta no 4º quadrante");
    }
    
}