#include <unistd.h>
#include <string.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int isup(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    return 0;
}

int islow(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    return 0; 
}
int main(int argc, char **argv)
{
    int i = 0;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(argv[1][i])
    {
        if(isup(argv[1][i]) == 1)
        {
            ft_putchar(argv[1][i] + 32);
        }
        else if(islow(argv[1][i]) == 1)
        {
            ft_putchar(argv[1][i] - 32);
        }
        else
            ft_putchar(argv[1][i]);
        i++;

    }
    return 0;
}