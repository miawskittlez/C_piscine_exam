#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strcat(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    str[i] = c;
    i++;
    str[i] = '\0';
    return (str);
}

int ft_contains(char *str, char c)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char strc[300];
    strc[0] = '\0';

    if(ac != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(av[1][j])
    {
        i = 0;
        while(av[2][i])
        {
            if (av[1][j] == av[2][i] && ft_contains(strc, av[1][j]) == 0)
            {
                ft_putchar(av[1][j]);
                ft_strcat(strc, av[1][j]);
                
            }
            i++;
        }
        j++;
    }
}
