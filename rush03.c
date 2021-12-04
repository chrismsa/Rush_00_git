#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);
void coluna(int x, char ponta_a, char ponta_b, char meio);

void rush(int x, int y)
{
  char meio[1] = "B";
  char ponta_a[1] = "A";
  char ponta_b[1] = "C";

  coluna(x, *ponta_a, *ponta_b, *meio);
  //coluna(y, *meio);
  //ft_putchar(b);
}

// Cria a largura
void coluna(int x, char ponta_a, char ponta_b, char meio)
{
  int i = 0;

  ft_putchar(ponta_a);

  if(x > 2)
  {
    while(i < (x - 2))
    {
      ft_putchar(meio);
      i++;
    };
  };

  ft_putchar(ponta_b);
}
