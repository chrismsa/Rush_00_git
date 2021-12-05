void    rush(int x, int y);
void    ft_putchar(char c);

int main(int argc, char *argv[])
{
    int x;
    int y;
    int i;
    int num;

    num = 0;
    i = 0;

    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            x = argv[1][i] - 48;
            num = num * 10 + x;
            if (x < 0 || x > 9)
                return (0);
            i++;
        }

        x = num;
        num = 0;
        i = 0;

        while (argv[2][i] != '\0')//'\0' Is the character that points the end of a string.
        {
            y = argv[2][i] - 48;
            num = num * 10 + y;
            if (y < 0 || y > 9)
                return (0);
            i++;
        }

        y = num;
        rush(x, y);
    }

    return (0);
}

