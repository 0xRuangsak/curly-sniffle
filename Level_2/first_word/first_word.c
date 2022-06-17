#include <unistd.h>

int main(*str){
    int i;
    while(str[i] != ' ' || str[i] != '\t'){
        write(1,&str[i],1);
        i += 1;
    }
    write(1,'\n',1);
    return(0);
}