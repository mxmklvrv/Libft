#include "libft.h"
/*copies n bytes from src to dest, may overlap*/
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *copy_dest;
    unsigned char *copy_src;
    size_t i;

    copy_dest = (unsigned char *) dest;
    copy_src = (unsigned char *) src;
    i = 0;

    if(copy_dest < copy_src)
    {
        while (i < n)
        {
            copy_dest[i] = copy_src[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            copy_dest[n] = copy_src[n];
        }
    }
    return (dest);    
}
/*
int main(void)
{
    char src[30] = "abcdefghij";
    char dest[30];
    ft_memmove(dest, src, 5);

    char src_1[30] = "abcdefghij";
    ft_memmove(src_1 + 5, src_1, 5);

    char src_2[30] = "abcdefghij";
    ft_memmove(src_2, src_2 + 3, 5);

}
*/
