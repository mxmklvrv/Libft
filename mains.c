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
	printf("\"2147483647\" => ft_atoi: %d | atoi: %d\n", ft_atoi("2147483647"),
		atoi("2147483647"));
	
	printf("-----------------------------ft_bzero test--------------------------------------\n");
	char	a_ft_bzero[10] = "abcdefghi", b_bzero[10] = "abcdefghi";
	ft_bzero(a_ft_bzero, 5);
	bzero(b_bzero, 5);
	printf("ft_bzero: ");
	for (int i = 0; i < 10; i++)
		printf(a_ft_bzero[i] ? "%c" : "\\0", a_ft_bzero[i]);
	printf("\n");
	printf("bzero:    ");
	for (int i = 0; i < 10; i++)
		printf(b_bzero[i] ? "%c" : "\\0", b_bzero[i]);
	printf("\n");
	
	printf("-----------------------------ft_calloc test--------------------------------------\n");
	int *arr_ft_calloc = ft_calloc(5, sizeof(int));
    if (arr_ft_calloc)
    {
        printf("Test Case ft_calloc: Array of 5 ints (should be zeroed): ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr_ft_calloc[i]);
        printf("\n");
        free(arr_ft_calloc);
    }
    else
    {
        printf("Test Case ft_calloc: Memory allocation failed\n");
    }

	int *arr_calloc = calloc(5, sizeof(int));
    if (arr_calloc)
    {
        printf("Test Case calloc: Array of 5 ints (should be zeroed): ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr_calloc[i]);
        printf("\n");
        free(arr_calloc);
    }
    else
    {
        printf("Test Case calloc: Memory allocation failed\n");
    }
	
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
	*/
	printf("-----------------------------ft_itoa test--------------------------------------\n");
	
    printf("\"69699\" => ft_itoa: %s | itoa: %s\n", ft_itoa(69699), itoa(69699));
    printf("\"-999\" => ft_itoa: %s | itoa: %s\n", ft_itoa(-999), itoa(-999));
    printf("\"0\" => ft_itoa: %s | itoa: %s\n", ft_itoa(0), itoa(0));
    printf("\"-2147483648\" => ft_itoa: %s | itoa: %s\n", ft_itoa(-2147483648), itoa(-2147483648));
    printf("\"999999999\" => ft_itoa: %s | itoa: %s\n", ft_itoa(999999999), itoa(999999999));

}
