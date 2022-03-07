// crie um algoritmo em c que calcule a area do retangulo e passe como parametro a base por referencia e a altura por valor

#include <stdio.h>

// passagem de parametro por valor e parametro
void calculaArea (int altura, int *base )
{
  int area;
  area = base * altura;
    printf("o valor da área do retangulo eh %d\n", area);
}

int main() {
    int base, altura;
  
    printf("digite o valor da base do retangulo\n");
    scanf("%d", &base);
    
    printf("digite o valor da altura do retangulo \n");
    scanf("%d", &altura);

  calculaArea (&base,altura);
    
  return 0;
} 