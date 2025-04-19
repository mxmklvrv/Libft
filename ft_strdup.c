#include "libft.h"

char *ft_strdup(const char *s)
{
    char *res;
    int i;
    int len;

    i = 0;
    len = 0;
    while (s[len])
        len++;
    res = (char *)malloc(sizeof(char) * (len + 1));
    
    if (res == NULL)
        return (NULL);
    while(i < len)
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);   
}
