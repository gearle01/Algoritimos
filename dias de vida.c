void main(){
 int dia,diaatual,mes,mesatual,ano,anoatual,totaldias,i;

printf("Digite o dia que você nasceu:\n");
scanf("%d",&dia);
printf("Digite o mes que você nasceu:\n");
scanf("%d",&mes);
printf("Digite o ano que você nasceu:\n");
scanf("%d",&ano);
printf("Digite o dia de hoje:\n");
scanf("%d",&diaatual);
printf("Digite o mês atual:\n");
scanf("%d",&mesatual);
printf("Digite o ano atual:\n");
scanf("%d",&anoatual);

    for(int i = ano; i < anoatual; i++){ 

        // verifica se ano é bissexto ou não
        if(i % 4 == 0){
            totaldias += 366;
        } else {
            totaldias += 365;
        }
    }

    printf("Dias: %d\n",totaldias);

    
}