#include <unistd.h>

void	rot13(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if( (str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm') )
			str[i] += 13;
		else if( (str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z') )
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
    }
}

int main(*str){
    rot13(str);
    return (0);
}