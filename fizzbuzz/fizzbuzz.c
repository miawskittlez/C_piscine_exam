#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long    lnb;
    lnb = nb;
    if(lnb < 0)
    {
        ft_putchar('-');
        lnb = -lnb;
    }
    if(lnb >= 10)
        ft_putnbr(lnb / 10);
        ft_putchar(lnb % 10 + 48);
    
}

int main (void)
{
    int i;
    i = 1;

    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            ft_putstr("fizzbuzz");
        }
        else if(i % 5 == 0)
        {
            ft_putstr("buzz");
        }
        else if(i % 3 == 0)
        {
            ft_putstr("fizz");
        }
        else
        ft_putnbr(i);
        ft_putchar(10);
        i++;
    }
}