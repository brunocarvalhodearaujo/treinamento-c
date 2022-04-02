#include <stdio.h>

int main()
{
  int tamanhoTanque, consumoPorLitro, distanciaPercorrida, valorLitro;
  printf("Informe o tamanho do tanque de combustível (em litros): "); // exibir mensagem na tela
  scanf("%d", &tamanhoTanque); // ler conteúdo escrito pelo usuário
  printf("Informe o consumo médio do carro (Km/litro): ");
  scanf("%d", &consumoPorLitro);
  printf("Informe a distância que será percorrida (em Km): ");
  scanf("%d", &distanciaPercorrida);
  printf("Informe o valor do litro de combustível (em Reais): ");
  scanf("%d", &valorLitro);

  int litrosNecessariosParaAViagem = distanciaPercorrida * consumoPorLitro;
  printf("\nSerão necessarios %d litros de combustível serão necessários para completar a viagem.\n", litrosNecessariosParaAViagem);

  int reabastecimentosNecessarios = litrosNecessariosParaAViagem / tamanhoTanque;
  printf("\nSerão necessários %d reabastecimentos (total de tanques cheios) para completar a viagem.\n", reabastecimentosNecessarios);

  int valorTotalCombustivel = litrosNecessariosParaAViagem * valorLitro;
  printf("\nO valor total gasto com o combustível será de R$ %d.\n", valorTotalCombustivel);

  return 0;
}
