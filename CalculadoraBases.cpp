#include <stdio.h>
#define MAX 50

int bin_to_dec(int bin)
{
  int total = 0;
  int pot = 1;

  while (bin > 0)
  {
    total += bin % 10 * pot;
    bin = bin / 10;
    pot = pot * 2;

    fprintf(stderr, "while\n");
  }

  return total;
}

int main(void)
{
  int dec = 0;
  int bin = 0;

  printf("Entre com o tipo de conversao (0 ou 1): ");
  scanf("%d", &bin);

  dec = bin_to_dec(bin);

  printf("Bin = %d - Dec = %d\n", bin, dec);

  return 0;
}
