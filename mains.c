#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}


int	main(void)
{
    /*
	printf("-----------------------------ft_atoi test--------------------------------------\n");
	printf("\"12345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("12345"),
		atoi("12345"));
	printf("\"-12345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("-12345"),
		atoi("-12345"));
	printf("\"  12345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("  12345"),
		atoi("  12345"));
	printf("\"  -12345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("  -12345"),
		atoi("  -12345"));
	printf("\"+12345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("+12345"),
		atoi("+12345"));
	printf("\"0012345\" => ft_atoi: %d | atoi: %d\n", ft_atoi("0012345"),
		atoi("0012345"));
	printf("\"abcd123\" => ft_atoi: %d | atoi: %d\n", ft_atoi("abcd123"),
		atoi("abcd123"));
	printf("\"  \t\n\v\f\r 12345\" => ft_atoi: %d | atoi: %d\n",
		ft_atoi("  \t\n\v\f\r 12345"), atoi("  \t\n\v\f\r 12345"));
	printf("\"12345abc\" => ft_atoi: %d | atoi: %d\n", ft_atoi("12345abc"),
		atoi("12345abc"));
	printf("\"-2147483648\" => ft_atoi: %d | atoi: %d\n",
		ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("\"9223372036854775808\" => ft_atoi: %d | atoi: %d\n", ft_atoi("9223372036854775808"),
		atoi("9223372036854775808"));
	
	printf("-----------------------------ft_bzero test--------------------------------------\n");
	char	a_ft_bzero[10] = "abcdefghi", b_bzero[10] = "abcdefghi";
    printf("%lu\n", strlen(a_ft_bzero));
    printf("%lu\n", strlen(b_bzero));
	ft_bzero(a_ft_bzero, 3);
	bzero(b_bzero, 3);
	printf("ft_bzero: ");
	for (int i = 0; i < 10; i++)
		printf("%c", a_ft_bzero[i]);
	printf("\n");
	printf("bzero:    ");
	for (int i = 0; i < 10; i++)
		printf("%c", b_bzero[i]);
    printf("\n");
	*/
	printf("-----------------------------ft_calloc test--------------------------------------\n");
	int *arr_ft_calloc = ft_calloc(5, sizeof(int));
    if (arr_ft_calloc)
    {
        printf("Test ft_calloc: Array of 5 ints: ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr_ft_calloc[i]);
        printf("\n");
        free(arr_ft_calloc);
    }
    else
    {
        printf("ft_calloc: Memory allocation failed\n");
    }

	int *arr_calloc = calloc(5, sizeof(int));
    if (arr_calloc)
    {
        printf("calloc: Array of 5 ints: ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr_calloc[i]);
        printf("\n");
        free(arr_calloc);
    }
    else
    {
        printf("calloc: Memory allocation failed\n");
    }
	/*
	printf("-----------------------------ft_isalnum test--------------------------------------\n");

	char test1_isalnum[] = {'a', 'z', 'A', 'Z', 'm', 'M'};
    printf("Test Case 1: Alphabetic characters:\n");
    for (int i = 0; i < 6; i++) {
        printf("ft_isalnum('%c') = %d, isalnum('%c') = %d\n", test1_isalnum[i], ft_isalnum(test1_isalnum[i]), test1_isalnum[i], isalnum(test1_isalnum[i]));
    }

    char test2_isalnum[] = {'0', '9', '5'};
    printf("\nTest Case 2: Numeric characters:\n");
    for (int i = 0; i < 3; i++) {
        printf("ft_isalnum('%c') = %d, isalnum('%c') = %d\n", test2_isalnum[i], ft_isalnum(test2_isalnum[i]), test2_isalnum[i], isalnum(test2_isalnum[i]));
    }

    char test3_isalnum[] = {'!', '@', '#', '$', '%', '^', '&', '*', ' ', '\n', '\t'};
    printf("\nTest Case 3: Non-alphanumeric characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("ft_isalnum('%c') = %d, isalnum('%c') = %d\n", test3_isalnum[i], ft_isalnum(test3_isalnum[i]), test3_isalnum[i], isalnum(test3_isalnum[i]));
    }

    
    char test4_isalnum[] = {128, 200, 255}; //extended ASCII characters
    printf("\nTest Case 4: Extended ASCII characters:\n");
    for (int i = 0; i < 3; i++) {
        printf("ft_isalnum('%c') = %d, isalnum('%c') = %d\n", test4_isalnum[i], ft_isalnum(test4_isalnum[i]), test4_isalnum[i], isalnum(test4_isalnum[i]));
    }
	

	printf("-----------------------------ft_isalpha test--------------------------------------\n");
	
    char test1_isalpha[] = {'a', 'z', 'A', 'Z', 'm', 'M'};
    printf("Test Case 1: Alphabetic characters:\n");
    for (int i = 0; i < 6; i++) {
        printf("ft_isalpha('%c') = %d, isalpha('%c') = %d\n", test1_isalpha[i], ft_isalpha(test1_isalpha[i]), test1_isalpha[i], isalpha(test1_isalpha[i]));
    } 
    char test2_isalpha[] = {'0', '9', '5'};
    printf("\nTest Case 2: Numeric characters:\n");
    for (int i = 0; i < 3; i++) {
        printf("ft_isalpha('%c') = %d, isalpha('%c') = %d\n", test2_isalpha[i], ft_isalpha(test2_isalpha[i]), test2_isalpha[i], isalpha(test2_isalpha[i]));
    } 
    char test3_isalpha[] = {'!', '@', '#', '$', '%', '^', '&', '*', ' ', '\n', '\t'};
    printf("\nTest Case 3: Non-alphabetic characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("ft_isalpha('%c') = %d, isalpha('%c') = %d\n", test3_isalpha[i], ft_isalpha(test3_isalpha[i]), test3_isalpha[i], isalpha(test3_isalpha[i]));
    }

    char test4_isalpha[] = {128, 200, 255}; // extended ASCII characters
    printf("\nTest Case 4: Extended ASCII characters:\n");
    for (int i = 0; i < 3; i++) {
        printf("ft_isalpha('%c') = %d, isalpha('%c') = %d\n", test4_isalpha[i], ft_isalpha(test4_isalpha[i]), test4_isalpha[i], isalpha(test4_isalpha[i]));
    }
	
	printf("-----------------------------ft_isascii test--------------------------------------\n");
	
    char test1_isascii[] = {0, 32, 48, 65, 97, 127}; // Some ASCII characters
    printf("Test Case 1: ASCII characters:\n");
    for (int i = 0; i < 6; i++) {
        printf("ft_isascii('%c') = %d, isascii('%c') = %d\n", test1_isascii[i], ft_isascii(test1_isascii[i]), test1_isascii[i], isascii(test1_isascii[i]));
    }
    char test2_isascii[] = {128, 200, 255}; // Some non-ASCII extended characters
    printf("\nTest Case 2: Non-ASCII characters:\n");
    for (int i = 0; i < 3; i++) {
        printf("ft_isascii('%c') = %d, isascii('%c') = %d\n", test2_isascii[i], ft_isascii(test2_isascii[i]), test2_isascii[i], isascii(test2_isascii[i]));
    }
	
	printf("-----------------------------ft_isdigit test--------------------------------------\n");
	
    char test1_isdigit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    printf("Test Case 1: Digit characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("ft_isdigit('%c') = %d, isdigit('%c') = %d\n", test1_isdigit[i], ft_isdigit(test1_isdigit[i]), test1_isdigit[i], isdigit(test1_isdigit[i]));
    }
    char test2_isdigit[] = {'a', 'z', 'A', 'Z', '!', '@', '#', '$', '%', ' '};
    printf("\nTest Case 2: Non-digit characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("ft_isdigit('%c') = %d, isdigit('%c') = %d\n", test2_isdigit[i], ft_isdigit(test2_isdigit[i]), test2_isdigit[i], isdigit(test2_isdigit[i]));
    }
	
	printf("-----------------------------ft_isprint test--------------------------------------\n");
	
    char test1_isprint[] = {32, 33, 48, 65, 97, 126};
    printf("Test Case 1: Printable characters:\n");
    for (int i = 0; i < 6; i++) {
        printf("ft_isprint('%c') = %d, isprint('%c') = %d\n", test1_isprint[i], ft_isprint(test1_isprint[i]), test1_isprint[i], isprint(test1_isprint[i]));
    }
    char test2_isprint[] = {0, 9, 10, 11, 12, 127}; 
    printf("\nTest Case 2: Non-printable characters:\n");
    for (int i = 0; i < 6; i++) {
        printf("ft_isprint('%c') = %d, isprint('%c') = %d\n", test2_isprint[i], ft_isprint(test2_isprint[i]), test2_isprint[i], isprint(test2_isprint[i]));
    }
	
	printf("-----------------------------ft_itoa test--------------------------------------\n");
	
    printf("%s %s %s %s %s\n", ft_itoa(69699), ft_itoa(-999), ft_itoa(0), ft_itoa(-2147483648), ft_itoa(999999999));

    printf("-----------------------------ft_memchr test--------------------------------------\n");

    char	str_memchr[] = "To begin,you must 1 reimplement a set of functions libc.";
 	char	*ptr_memchr = ft_memchr(str_memchr, 't', strlen(str_memchr));
 	char	*ptr_1_memchr = memchr(str_memchr, 't', strlen(str_memchr));
 	
 	printf("%s\n%s\n", ptr_memchr, ptr_1_memchr);

    printf("-----------------------------ft_memcmp test--------------------------------------\n");

   
 
 	char	str_memcmp[] = "abc";
 	char	str_1_memcmp[] = "ABC";
 	int		res_memcmp = ft_memcmp(str_memcmp, str_1_memcmp, 3);
 	int		res_1_memcmp = memcmp(str_memcmp, str_1_memcmp, 3);;
 	printf("%d\n%d\n", res_memcmp, res_1_memcmp);
 
    printf("-----------------------------ft_memcpy test--------------------------------------\n");

    char str_memcpy[] = "Hello, world!";
	char dest_memcpy[20];
	char str_1_memcpy[] = "Hello, world!";
	char dest_1_memcpy[20];

	ft_memcpy(dest_memcpy, str_memcpy, strlen(str_memcpy) + 1);
	memcpy(dest_1_memcpy, str_1_memcpy, strlen(str_1_memcpy) + 1);
	printf("ft_memcpy result: %s\n", dest_memcpy);
	printf("memcpy result: %s\n", dest_1_memcpy);

    printf("Original string with overlap: %s\n", str_memcpy);
    ft_memcpy(str_memcpy + 2, str_memcpy, 5); 
	memcpy(str_1_memcpy + 2, str_1_memcpy, 5);
    printf("After ft_memcpy (overlap): %s\n", str_memcpy);
	printf("After memcpy (overlap): %s\n", str_1_memcpy);

    printf("-----------------------------ft_memmove test--------------------------------------\n");
    char src2[] = "Hello, world!";
    printf("Before overlapping memmove:\n");
    printf("src2: \"%s\"\n", src2);

    ft_memmove(src2 + 2, src2, 5);
    printf("After overlapping ft_memmove:\n");
    printf("src2: \"%s\"\n", src2);

    printf("-----------------------------ft_memset test--------------------------------------\n");
    char str_memset[50] = "ehal greka  cherez reku";
	char str_1_memset[50] = "ehal greka  cherez reku";
	memset(str_memset, 'O', 6);
	ft_memset(str_1_memset, 'O', 6);
	printf("after memset: %s\n", str_memset);
	printf("after ft_memset: %s\n", str_1_memset);

    printf("-----------------------------ft_split test--------------------------------------\n");

    char const	*str_split;
	char		sep_split;
	char		**words_split;
	int			i;

	str_split = "ehal greka cherez reku";
	sep_split = ' ';
	words_split = ft_split(str_split, sep_split);
	i = 0;
	while (words_split[i])
	{
		printf("%s\n", words_split[i]);
		free(words_split[i]);
		i++;
	}
	free(words_split);

    printf("-----------------------------ft_strchr test--------------------------------------\n");

   
	char	str_strchr[] = "function returns a pointer";
	char	c_strchr = 'r';
	char	*ptr_strchr = ft_strchr(str_strchr, c_strchr);
	char	*pt_strchr = strchr(str_strchr, c_strchr);

	if (ptr_strchr)
		printf("ft_strchr: %s\n", ptr_strchr);
	else
		printf("ft_strchr: NULL\n");
	if (pt_strchr)
		printf("strchr: %s\n", pt_strchr);
	else
		printf("strchr: NULL\n");
	

    printf("-----------------------------ft_strdup test--------------------------------------\n");
    const char *str_dup = "";
	char *res_dup = ft_strdup(str_dup);
	printf("Original: %s\n", str_dup);
	printf("Dup: %s\n",res_dup);
	free(res_dup);
*/
}

