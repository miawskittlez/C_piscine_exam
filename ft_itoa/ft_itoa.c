#include <stdlib.h>

int find_int_len(int nb)
{
    int i = 0;
    if (nb == 0)
        return 1;
    if(nb < 0)
    {
        i++;
        nb = -nb;
    }
    while(nb > 0)
        {
            nb = nb / 10;
            i++;
        }
    return i;
}

char	*ft_itoa(int nbr)
{
	int i = 0;
    char *res;
    int size = find_int_len(nbr);

    res = malloc(sizeof(char) * size + 1);
    if (nbr == 0)
    {
        res[i] = '0';
    }
        if(nbr < 0)
    {
        res[i] = '-';
        nbr = -nbr;
        i++;
    }
    res[size] = '\0';
    size--;
    while(nbr > 0)
        {
            res[size] = nbr % 10 + 48;
            nbr = nbr / 10;
            size--;
        }
    return res;
}
