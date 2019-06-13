#include<stdio.h>

void main(){
	 int num[10][10];

	    for(int l=1; l<11; l++){
	    	for(int c=1; c<11; c++){
	    		printf("%d X %d: %d\n", l, c, l*c);
             }
           printf("\n"); 
	 	 }
}