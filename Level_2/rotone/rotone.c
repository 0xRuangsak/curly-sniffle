#include <unistd.h>

void	rotane(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if( (str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y') )
			str[i] += 1;
		else if( (str[i] == 'Z') || (str[i] == 'z') )
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
    }
}

int main(*str){
    rotane(str);
    return (0);
}