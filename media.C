// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int nota1;
   int nota2;
   char nome[50];
   
   printf("Qual seu Nome: \n");
   scanf("%s",&nome);
   printf("Me diga a primeira nota: \n");
   scanf ("%i", &nota1);
   printf("Me diga a segunda nota: \n");
   scanf ("%i", &nota2);
   
   

   printf("\n%s,a media da nota final é: %i",nome, (nota1+nota2)/2);
   
    return 0;
}