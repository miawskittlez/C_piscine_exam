int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    char temp;
    int size = ft_strlen(str);

    while (i < size / 2)
    {
        temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
        i++;
    }
    return str;
}

"hello"
// char *str = 
/// char str[] = 

// "hello"
// "olleh"

// "coukcou"

// char temp;

// temp = str[i];
// str[i] = str[size - 1 - i];
// str[size - 1 - i] = temp;

