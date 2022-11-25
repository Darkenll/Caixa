#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    float dia,mes,ano,numb_ped,matriz[100][4],conta1=0,conta2=0,conta3=0,p;
    int contador=0,d=1,cont_letr=0,a,b;

    a=186;
    b=254;
    char prod_nom[100][15];

    printf("Insira o numero do pedido:\n");
    scanf("%f",&numb_ped);

    printf("\nInsira a data do pedido <ddmmaa>:\n");
    scanf("%f",&dia);
    scanf("%f",&mes);
    scanf("%f",&ano);
    
    for(int l=0;l<100;l++)
        {
            printf("\n\nInsira o codigo do produto %d:\n",d++);
            scanf("%f",&matriz[l][0]);
            if((int)matriz[l][0]==0)
            break;

            fflush(stdin);
            printf("\nInsira o nome do produto:\n");
            scanf("%s",&prod_nom[l]);
            
            printf("\nInsira o pre‡o unitario:\n");
            scanf("%f",&matriz[l][1]);

            printf("\nInsira a quantidade:\n");
            scanf("%f",&matriz[l][2]);

            conta1=(matriz[l][1]*23)/100; //Valor do IVA
            conta2=conta1+matriz[l][1];   //Valor C/IVA
            matriz[l][3]=conta2*matriz[l][2]; //SubTotal
            conta3+=matriz[l][3];   //Total do Subtotal

            contador++;
        }

    contador==1;
    p=contador;

    system("cls");

    escreveLinha();
    escreveLinha();
    escreveLinha();
    printf("\nNumero do pedido %.0f",numb_ped);
    printf("\nData do pedido: %.0f\\ %.0f\\ %.0f.",dia,mes,ano);
    escreveLinha();
    printf("\nConteudo do pedido:");
    printf("\n\t\t|C¢digo:|Nome:\t\t|   Pre‡o Unit:\t| Quantidade:\t|  Subtotal:  |\n");
   
    for(int l=0;l<p;l++)
        {
            if(strlen(prod_nom[l])<6)
            printf("\t\t|%4.0f\t|%s\t\t|%6.2f euros\t|%6.0f\t\t|%7.2f euros|\n",matriz[l][0],prod_nom[l],matriz[l][1],matriz[l][2],matriz[l][3]);
            else
            printf("\t\t|%4.0f\t|%s\t|%6.2f euros\t|%6.0f\t\t|%7.2f euros|\n",matriz[l][0],prod_nom[l],matriz[l][1],matriz[l][2],matriz[l][3]);
        }
    escreveLinha();
    printf("\nValor Total com IVA(23%%):%.2f.\n",conta3);
    escreveLinha();
    escreveLinha();
    escreveLinha();
}
    int escreveLinha()
    {
         printf("\n=======================================================================================");
         return(escreveLinha);
    }