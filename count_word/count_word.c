#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(long nb)
{
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + 48);
}

int main(int ac, char **av)
{
    int i = 0;
    int res = 0;
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(av[1][i])
    {
        if(!((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
        {
            if((av[1][i + 1] >= 9 && av[1][i + 1] <= 13) || av[1][i + 1] == ' ' || av[1][i + 1] == '\0')
            {
                res++;
            }
        }
        i++;
    }
    ft_putnbr(res);
    write(1, "\n", 1);
}
