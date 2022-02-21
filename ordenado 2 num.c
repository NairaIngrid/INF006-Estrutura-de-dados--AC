#include <stdio.h>

void crescente(int a, int b)
{
  if (a>b){
    printf ("\n%d, %d\n",a, b);
  }else{
    printf ("\n%d, %d\n",b, a);
  }
 }

int main() {
    int valor1, valor2;
    printf ("digite o valor1 ");
    scanf("%d", &valor1);
    printf("digite o valor2 ");
    scanf("%d", &valor2);
    printf("ordem crescente =");
    
    crescente(valor1, valor2);
    return 0;
}