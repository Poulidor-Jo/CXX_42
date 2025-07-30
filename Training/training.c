#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
    int i ;
    int lenght;
    char *dest;

    i = 0;
    lenght = 0;
    while(src[lenght])
        lenght++;
    dest = malloc(sizeof(char) * (lenght + 1));
    if (dest == NULL)
        return (NULL);
    while (i < lenght)
    {
        dest[i] = src[i];
        i++;
    }   
    dest[i] = '\0';
    return (dest);
    
}