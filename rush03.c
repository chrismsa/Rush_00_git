#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);
void coluna(int x, char ponta_a, char ponta_b, char meio, char quebra);
void linha(int x, int y, char nada, char meio, char quebra);

void rush(int x, int y)
{
  char meio[1] = "B";
  char ponta_a[1] = "A";
  char ponta_b[1] = "C";
  char quebra[1] = "\n";
  char nada[1] = " ";

  if(x > 0 && y > 0)
  {
    coluna(x, *ponta_a, *ponta_b, *meio, *quebra);
    linha(x, y, *nada, *meio, *quebra);

    if(y > 1)
    {
      coluna(x, *ponta_a, *ponta_b, *meio, *quebra);
    }
  }
}

// Cria a largura
void coluna(int x, char ponta_a, char ponta_b, char meio, char quebra)
{
  int i = 0;

  ft_putchar(ponta_a);

  if(x >= 2)
  {
    while(i < (x - 2))
    {
      ft_putchar(meio);
      i++;
    }

    ft_putchar(ponta_b);
  };

  ft_putchar(quebra);
}

// Cria a linha
void linha(int x, int y, char nada, char meio, char quebra)
{
  int i = 0;

  if(y >= 2)
  {
    while(i < (y - 2))
    {
      coluna(x, meio, meio, nada, quebra);
      i++;
    }
  }
}
