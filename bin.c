#include<stdio.h>

void converte(int num);
void converte(int num){
    int bin[8];

    for (int i = 7; i >= 0; i--) {
        if (num % 2 == 0) {
            bin[i] = 0;
            num = num / 2;
        } else {
            bin[i] = 1;
            num = num / 2;
        }
    }

    for (int i = 0; i < 8; i++) {
        printf("%d", bin[i]);
    }
}

void main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    converte(num);

}