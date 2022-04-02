#include <stdio.h>

int main()
{
  int valor1, valor2, resultado;
  // captura de dados
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);
  // processamento
  resultado = valor1 + valor2;
  // saida de dados
  printf("o resultado da operação é: %d\n", resultado);
  return 0;
}
