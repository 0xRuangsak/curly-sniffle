int	ft_strlen(char *str)
{
    int i;
    while (str[i] != '/0')
        i+=1;
    return(i);
}