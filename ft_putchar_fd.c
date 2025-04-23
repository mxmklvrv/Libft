#include "libft.h"

/*write char to specified file descriptor*/
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
#include <unistd.h>
int main (void)
{
    ft_putchar_fd('M', 1);
    return (0);

}
*/
