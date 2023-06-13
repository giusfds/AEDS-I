#include <stdio.h>
#include <string.h>

    char telefone (char c){


        if (c == '-')
        {
            return '-';
        }

        if (c >= '0' && c <= '9')
        {
            return c;
        }
        
        if (strchr("AaBbCc", c))
        {
            return '2';
        }

        if (strchr("DdEeFf", c))
        {
            return '3';
        }

        if (strchr("GgHhIi", c))
        {
            return '4';
        }

        if (strchr("JjKkLl", c))
        {
            return '5'; 
        }

        if (strchr("MmNnOo", c))
        {
            return '6';
        }

        if (strchr("PpQqRrSs", c))
        {
            return '7';
        }

        if (strchr("TtUuVv", c))
        {
            return '8';
        }
        
        if (strchr("WwXxYyZz", c))
        {
            return '9';
        }
        
        
        //A B C D E F G H I J K L M N O P Q R S T U V W X Y Z


    }

int main() {

    char str[13];

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", telefone(str[i]));
    }
    

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}