#include<stdio.h>

int main(){
    //torre - movendo cinco casas para direita(sando fof)
    printf("Movimento da torre:\n ");
    for (int t = 0; t < 5; t++)
     {
      printf("direita:\n");
    }
    //Bispo-movendo bispo cinco casas diagonal(usando while)
    printf("\nMovimento do Bispo:\n");
     int b = 0;
     while (b < 5)
     {
      printf("Cima,Direita\n");
      b++;
     }
     //Rainha- movendo oito casas para esquerda (usando do while)
     printf("\nMovimento da Rainha:\n");
     int r = 0;
     do
     {
      printf("esquerda\n");
      r++;
     } while (r < 8);







    return 0;
}
