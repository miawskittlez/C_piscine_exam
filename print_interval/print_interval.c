#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;

    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(av[1][i])
    {
        if(i > 0 && i % 5 == 0 && i % 3 == 0)
        {
            ft_putchar('5');
        }
        else if(i > 0 && i % 3 == 0)
        {
            ft_putchar('5');
        }
        else if(i > 0 && i % 5 == 0)
        {
            ft_putchar('3');
        }
        else
        ft_putchar(av[1][i]);
    i++;
    }
    return 0;
}