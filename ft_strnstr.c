#include "libft.h"

/*The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack,
 where not more than len characters are searched. Characters that appear after a '\0' character are not searched.*/

char *strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;

    if (!needle[0])
        return ((char *)haystack);
    if (!haystack && !n)
        return (NULL);
    while (haystack[i] && i < n)
    {
        j = 0;
        while(haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && ((i+j) < n))
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);    
}
