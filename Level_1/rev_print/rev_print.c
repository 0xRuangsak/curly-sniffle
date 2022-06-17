#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;
    while (str[i] != '/0')
        i+=1;
    return(i);
}

char *ft_rev_print (char *str)
{
    int i;
    i = ft_strlen(char *str) - 1;
    while (i <= 0){
        write(1,&str[i],1);
        i-=1;
    }
    return(str);
}