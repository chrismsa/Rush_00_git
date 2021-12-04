#include <stdio.h>
#include <stdlib.h>

void rush(int x, int y);
void    ft_putchar(char c);

int main(int argc, char *argv[])
{
  int x;
  int y;

  if (argc == 3)
  {
    x = (*argv[1] - 48);
    y = (*argv[2] - 48);


    if((x >= 0 && x <= 9) && (y >= 0 && y <= 9))
    {
      rush(x, y);
    }
  }

  //printf("----------- 0, 0 -----------\n");
  //rush(0, 0);

  //printf("----------- 0, 1 -----------\n");
  //rush(0, 1);

  //printf("----------- 1, 0 -----------\n");
  //rush(1, 0);

  //printf("----------- 1, 1 -----------\n");
  //rush(1, 1);

  //printf("----------- 2, 2 -----------\n");
  //rush(2, 2);

  //printf("----------- 3, 3 -----------\n");
  //rush(3, 3);

  //printf("----------- 2, 1 -----------\n");
  //rush(2, 1);

  //printf("----------- 1, 2 -----------\n");
  //rush(1, 2);

  //printf("----------- 3, 1 -----------\n");
  //rush(3, 1);

  //printf("----------- 1, 3 -----------\n");
  //rush(1, 3);

  //printf("----------- 5, 5 -----------\n");
  //rush(5, 5);

  //printf("----------------------------\n");
  return (0);
}
