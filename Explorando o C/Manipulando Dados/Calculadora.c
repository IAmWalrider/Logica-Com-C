#include <stdio.h>
int main(){


printf("-------SEJA BEMVINDOS---------\n");
printf("Escolha o tipo de calculadora\n");
printf("Digite 1 para soma e 2 para multiplicaçao\n");

int escolha=0;
scanf("%d",&escolha);
if(escolha==1){
//soma
    int a=0;
    int b=0;
    printf("DIGITEDOIS NUMEROS:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int somaab=a + b;
    printf("sua soma e %d",somaab);


}
if(escolha==2){
//multiflicao

printf("digite dois numero para multiplicar:\n");
int a2=0;
int a1=0;

scanf("%d",&a2);
scanf("%d",&a1);
int multi=a1*a2;
printf("sua multiplicaçao eh %d",multi);


}
}