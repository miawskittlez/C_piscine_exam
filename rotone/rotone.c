#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_isalpha(char c)
{
    if((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
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
        if(ft_isalpha(argv[1][i]) == 1)
        {
            ft_putchar(argv[1][i] + 1);
        }
        else if(argv[1][i] == 'z')
        {
            ft_putchar('a');
        }
        else if(argv[1][i] == 'Z')
        {
            ft_putchar('A');
        }
        else
        ft_putchar(argv[1][i]);
    i++;
    }
    return 0;

}