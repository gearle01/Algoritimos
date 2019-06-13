#include <stdio.h>
#include <math.h>

void main() {

    int quant;
    float med = 0, med1, dp, desviom = 0, varb;

    printf("Insira quantos números deseja calcular. ");
    scanf("%d", &quant);

    int desv[quant];
    int num[quant];

    for (int i = 0; i < quant; i++) {
        printf(" Digite os números: ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < quant; i++) {
        med = num[i] + med;
    }
    med1 = med / quant;

    for (int i = 0; i < quant; i++) {
        desv[i] = num[i] - med1;
    }
    for (int i = 0; i < quant; i++) {
        desviom = (desv[i] * desv[i]) + desviom;
    }
    varb = desviom / quant;
    dp = sqrt(varb);

    for (int i = 0; i < quant; i++) {
        printf(" O %d numero: %d\n", i, num[i]);
    }
    printf(" A Média: %.2f\n", med1);
    printf(" A variância: %.2f\n", desviom);
    printf(" O desvio Padrao: %.2f\n", dp);

}