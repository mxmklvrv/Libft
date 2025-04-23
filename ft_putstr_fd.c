#include "libft.h"
/*
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
*/
/*Outputs the string ’s’ to the specified file descriptor.*/
void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (s == NULL)
        return ;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }

}
/*
#include <unistd.h>
int main (void)
{
    ft_putstr_fd("Korabli lavirovali, lavirovali, da ne vylavirovali\n", 1);
    return (0);
}
*/
