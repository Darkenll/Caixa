#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,d,e,cod_prod[100],quanti[100],f=0,conta_produto=0,p,k;
    char nom_prod[15][20];
    float prec_uni[100],conta1,conta2,conta3[100],conta4=0;

    printf("Insira o n£mero do pedido:");
    scanf("%d",&a);
    printf("\nInsira a data do pedido <ddmmaa>\n");
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    system("cls");

    printf("Conte£do do pedido:%d\n",a);
    
    for(e=0;e<100;e++)
    {
        printf("\nInsira o c¢digo do produto %d:",f+=1);
        scanf("%d",&cod_prod[e]);
        if (cod_prod[e]==0)
        break;  
        printf("Insira o nome do produto:");
        scanf("%s",&nom_prod[e]); 
        printf("Insira o pre‡o unitario:");
        scanf("%f",&prec_uni[e]);
        printf("Insira a quantidade:");
        scanf("%d",&quanti[e]);
        
        conta1=(prec_uni[e]*23)/100;

        conta2=prec_uni[e]+conta1;

        conta3[e]=conta2*quanti[e];

        conta4=conta3[e]+conta4;

        conta_produto++;
    }

    conta_produto==1;
    p=conta_produto;

    system("cls");

    printf("======================================================================================================\n");
    printf("======================================================================================================\n");
    printf("======================================================================================================\n");
    printf("N£mero do pedido:%d\n",a);
    printf("Data do pedido:%d \\ %d \\ %d\n",b,c,d);
    printf("======================================================================================================\n");
    printf("Conte£do do pedido:\n");
    printf("\t| C¢digo:\t| Nome:\t\t\t| Pre‡o Unit:\t\t| Quantidade\t| SubTotal   |\n");

    for(e=0;e<p;e++)
    {
        printf("\t|%5.d\t\t|%10.10s\t\t|%6.2f euros\t\t|%6.d\t\t|%5.2f euros |\n",cod_prod[e],nom_prod[e],prec_uni[e],quanti[e],conta3[e]);
    }
    printf("\n======================================================================================================\n");
    printf("\nValor total com IVA(23%%): %.2f euros.\n",conta4);
    printf("\n======================================================================================================\n");
    printf("======================================================================================================\n");
    printf("======================================================================================================\n");

    system("pause");
}