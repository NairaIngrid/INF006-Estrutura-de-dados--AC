#include <stdio.h>

void maior(int a, int b)
{
  if (a>b){
    printf ("\n%d\n",a);
  }else{
    printf ("\n%d\n",b);
  }
 }

int main() {
    int valor1, valor2;
    printf ("digite o valor1 ");
    scanf("%d", &valor1);
    printf("digite o valor2 ");
    scanf("%d", &valor2);
    printf("maior =");
    
    maior(valor1, valor2);
    return 0;
}
