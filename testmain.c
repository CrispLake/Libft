/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:14:03 by emajuri           #+#    #+#             */
/*   Updated: 2022/11/23 15:16:33 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "libft.h"


int	main(void)
{
//ft_putull_base_fd
//
	char	*str = ft_ulltoa_base(-25, 16);
	ft_putull_base_fd(-25, 16, 1);
	ft_putchar_fd('\n', 1);
	ft_putull_base_fd((unsigned long long)str, 16, 1);
	ft_putchar_fd('\n', 1);
//
//ulltoa_base
	printf("%s\n", str);
	char	*address = ft_ulltoa_base((unsigned long long)str, 16);
	printf("%p\n", str);
	printf("%s\n", address);
	free(str);
	free(address);
//	
//ft_putnbr_base_fd
//
//	ft_putnbr_base_fd(0, 16, 1);
//	ft_putchar_fd('\n', 1);
//
//itoa_base
//
//	char	*str = ft_itoa_base(-12923985, 16);
//	printf("%s\n", str);
//	free(str);
//
//
//	int string1[] = {7, 7, 7, 7};
//	int string2[] = {8, 8, 8, 8};
//	printf("ft_isaplha: %i\n", ft_isalpha('a'));
//	printf("ft_isdigit: %i\n", ft_isdigit(1));
//	printf("ft_isalnum: %i\n", ft_isalnum('a'));
//	printf("isascii: %i\n", isascii(0177));
//	printf("ft_isascii: %i\n", ft_isascii(0177));
//	printf("ft_isprint: %i\n", isprint(65));
//	printf("strlen: %lx\n", strlen("123456789"));
//	printf("ft_strlen: %lx\n", ft_strlen("123456789"));
//	printf("memset: %s\n", memset(string1, 'a', 11));
//	printf("ft_memset: %s\n", ft_memset(string1, 'a', 11));
//	bzero(string1, 3);
//	ft_bzero(string1, 3);
//	int x = 0;
//	while (x <= 10)
//		printf("ft_bzero: %c\n", string1[x++]);
//
//memmove
//
//	char	str1[40] = "I am going from Helsinki to Tuusula";
//	char	str3[40] = "I am going from Helsinki to Tuusula";
//
//	printf( "Function:\tmemmove with overlap\n" );
//	printf( "Orignal :\t%s\n",str1);
//	printf( "Source:\t\t%s\n", str1 + 5 );
//	printf( "Destination:\t%s\n", str1 + 11 );
//	memmove( str1 + 11, str1 + 5, 29 );
//	ft_memmove( str4 + 11, str4 + 5, 29 );
//	printf( "Result:\t\t%s\n", str1 );
//	printf( "ft:\t\t%s\n", str4 );
//
//memcpy
//
//	char	str2[40] = "I am going from Helsinki to Tuusula";
//	char	str3[40] = "I am going from Helsinki to Tuusula";
//	printf("\n");
//	printf( "Function:\tmemcpy with overlap\n" );
//	printf( "Orignal :\t%s\n",str2);
//	printf( "Source:\t\t%s\n", str2 + 5 );
//	printf( "Destination:\t%s\n", str2 + 11 );
//	memcpy( str2 + 11, str2 + 5, 29 );
//	ft_memcpy( str3 + 11, str3 + 5, 29 );
//	printf( "Result:\t\t%s\n", str2 );
//	printf( "ft:\t\t%s\n", str3 );
//

//	memcpy(0, 0, 5);
//	ft_memcpy(0, 0, 5);
//
//strlcpy
//
//	char	dst[] = "abcdef";
//	char	src[] = "wwwwww";
//	
//	printf("strlcpy dest: %s\n", dst);
//	printf("strlcpy src: %s\n", src);
//	printf("strlcpy count: %lu\n", ft_strlcpy(dst, src, 0));
//	printf("strlcpy dest: %s\n", dst);
//
//strlcat
//
//	char	dst1[40] = "abcde";
//	char	dst2[40] = "";
//	char	dst3[40] = "abcde";
//	char	dst4[40] = "";
//	char	dst5[40] = "abcde";
//	char	dst6[40] = "";
//	char	src1[] = "12345";
//	char	src2[] = "12345";
//	char	src3[] = "";
//	char	src4[] = "";
//	char	src5[] = "12345";
//	char	src6[] = "12345";
//
//	char	*dst[10];
//	char	*src[10];
//
//	dst[0] = dst1;
//	dst[1] = dst2;
//	dst[2] = dst3;
//	dst[3] = dst4;
//	dst[4] = dst5;
//	dst[5] = dst6;
//
//	src[0] = src1;
//	src[1] = src2;
//	src[2] = src3;
//	src[3] = src4;
//	src[4] = src5;
//	src[5] = src6;
//
//	int	x = 0;
//	while (x <= 5)
//	{
//		printf("strlcat dest: %s\n", dst[x]);
//		printf("strlcat src: %s\n", src[x]);
//		printf("strlcat count: %lu\n", ft_strlcat(dst[x], src[x], 15));
//		printf("strlcat dest: %s\n\n", dst[x]);
//		x++;
//	}
//
//	char	dest[15] = "rrrrrr";
//	char	dest2[15] = "rrrrrr";
//
//	printf("%lu\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));
//	printf("%lu\n", ft_strlcat(dest2, "lorem ipsum dolor sit amet", 15));
//	printf("%s\n", dest);
//	printf("%s\n", dest2);
//
//
//
//
//toupper/tolower
//
//	printf("ft_toupper: %c\n", ft_toupper('m'));
//	printf("ft_tolower: %c\n", ft_tolower('D'));
//	
//strchr/strrchr
//
//	printf("strchr: %s\n", strchr("aaaaaaaeppppp", 'e'));
//	printf("ft_strchr: %s\n", ft_strchr("aaaaaaaeppppp", 'e'));
//	printf("strrchr: %s\n", strrchr("xxyxxxyxxxyxyxyxww", 'p'));
//	printf("ft_strrchr: %s\n", ft_strrchr("xxyxxxyxxxyxyxyxww", 'p'));
//
//strncmp
//
//	printf("strncmp: %i\n", strncmp("1", "2", 0));
//	printf("ft_strncmp: %i\n", ft_strncmp("1", "", 0));
//
//memchr
//
//	printf("memchr: %s\n", memchr("aaaaaaaeppppp", 'e', 8));
//	printf("ft_memchr: %s\n", ft_memchr("aaaaaaaeppppp", 'e', 8));
//	printf("memchr: %s\n", memchr("aaaaaaaeppppp", 'e', 0));
//	printf("ft_memchr: %s\n", ft_memchr("aaaaaaaeppppp", 'e', 0));
//	printf("memchr: %s\n", memchr("aaaaaaa", 'e', 10));
//	printf("ft_memchr: %s\n", ft_memchr("aaaaaaa", 'e', 10));
//
//ft_memcmp
//	
//	printf("memcmp: %i\n", memcmp("6", "1", 0));
//	printf("ft_memcmp: %i\n", ft_memcmp("6", "1", 0));
//
//ft_strnstr
//
//	printf("strnstr: %s\n", strnstr("1233123987", "31", 4));
//	printf("ft_strnstr: %s\n", ft_strnstr("1233123987", "31", 4));
//
//	printf("strnstr: %s\n", strnstr("1233123987", "", 4));
//	printf("ft_strnstr: %s\n", ft_strnstr("1233123987", "", 4));
//
//	printf("strnstr: %s\n", strnstr("", "1", 0));
//	printf("ft_strnstr: %s\n", ft_strnstr("", "1", 0));
//
//	printf("strnstr: %s\n", strnstr("asd", "asd", 4));
//	printf("ft_strnstr: %s\n", ft_strnstr("asd", "asd", 4));
//
	
//	printf("strnstr: %s\n", strnstr(0, "fake", 0));
//	printf("ft_strnstr: %s\n", ft_strnstr(0, "fake", 0));

//
//ft_atoi
//
//	printf("\nMAX_LONG+\natoi: %i\n", atoi("9223372036854775810"));
//	printf("ft_atoi: %i\n\n", ft_atoi("9223372036854775810"));
//	printf("MIN_LONG-\natoi: %i\n", atoi("-9223372036854775810"));
//	printf("ft_atoi: %i\n\n", ft_atoi("-9223372036854775810"));
//	printf("MIN_INT\natoi: %i\n", atoi("-2147483648"));
//	printf("ft_atoi: %i\n\n", ft_atoi("-2147483648"));
//	printf("MAX_INT\natoi: %i\n", atoi("2147483647"));
//	printf("ft_atoi: %i\n\n", ft_atoi("2147483647"));
//	printf("MAX_LONG\natoi: %i\n", atoi("000009223372036854775807"));
//	printf("ft_atoi: %i\n\n", ft_atoi("000009223372036854775807"));
//	printf("MIN_LONG\natoi: %i\n", atoi("-0009223372036854775807123456789123456789123456789"));
//	printf("ft_atoi: %i\n\n", ft_atoi("-0009223372036854775807123456789123456789123456789"));
//	printf("atoi: %i\n", atoi("-00048300647"));
//	printf("ft_atoi: %i\n\n", ft_atoi("-00048300647"));
//
//ft_calloc
//
//	char	*ptr1 = calloc(0, sizeof(char));
//	char	*ptr2 = ft_calloc(0, sizeof(char));
//	printf("calloc: %p\n", ptr1);
//	printf("ft_calloc: %p\n", ptr2);
//	int i;
//	i = 0;
//	while (i < 1)
//	{
//		ptr1[i] = 'a'+i;
//		i++;
//	}
//	i = 0;
//	while (i < 1)
//	{
//		ptr2[i] = 'a'+i;
//		i++;
//	}
//	printf("calloc: %s\n", ptr1);
//	printf("ft_calloc: %s\n", ptr2);
//	free(ptr1);
//	free(ptr2);
//
//ft_strdup
//
//	char	*ptr1 = "";
//	char	*ptr2 = "";
//	char	*ptr3 = strdup(ptr1);
//	char	*ptr4 = ft_strdup(ptr2);
//	printf("strdup: %p\t%s\n%p\t%s\n", ptr1, ptr1, ptr3, ptr3);
//	printf("ft_strdup: %p\t%s\n%p\t%s\n", ptr2, ptr2, ptr4, ptr4);
//	free(ptr3);
//	free(ptr4);
//
//ft_substr
//
//	printf("%s\n", ft_substr("01234", 10, 10));
//	printf("%s\n", ft_substr("01234", 5, 10));
//	printf("%s\n", ft_substr("01234", 0, 10));
//	printf("%s\n", ft_substr("01234", 0, 3));
//	printf("%s\n", ft_substr("01234", 0, 0));
//	printf("%s\n", ft_substr("", 0, 3));
//	printf("%s\n", ft_substr("123456789", 2, -5));
//
//ft_strjoin
//
//	printf("%s\n", ft_strjoin("112233", "abbeeff"));
//
//ft_strtrim
//
//	char	*ptr;
//	char	*ptr2;
//	
//	ptr = ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t");
//	ptr2 = ft_strtrim("123123", "123");
//	printf("%s\n", ptr);
//	printf("%s\n", ptr2);
//	printf("%c\n", ptr2[1]);
//	free(ptr);
//
//ft_split
//
//	char	**ptr;
//	char	*str = " a ab 12   123 \t  1";
//	int	i;
//	i = 0;
//	ptr = ft_split(str, ' ');
//	while (ptr[i] != 0)
//	{
//		printf("%s\n", ptr[i]);
//		i++;
//	}
//ft_itoa
//
//	char	*s;
//	int	n = -5859;
//	s = ft_itoa(n);
//
//	printf("%s\n", s);
//	printf("%i\n", INT_MIN);
//	printf("%li\n", LONG_MIN);
//	free(s);
//
//ft_strmapi
//ft_striteri
//
//ft_putchar_fd
//
//	char c = 'a';
//	ft_putchar_fd(c, 1);
//
//ft_putstr_fd
//
//	ft_putstr_fd("abcdefg", 1);
//
//ft_putendl_fd
//	
//	ft_putendl_fd("abcdefg", 1);
//
//ft_putnbr_fd
//
//	ft_putnbr_fd(INT_MAX, 1);
//	ft_putchar_fd('\n', 1);
//	ft_putnbr_fd(INT_MIN+600, 1);
//	ft_putchar_fd('\n', 1);
//	ft_putnbr_fd(-99, 1);
//	ft_putnbr_fd(-5, 1);


////////////////////////////////////////////////////
//
//BONUS
//
//lstmap
//
//	t_list *l = ft_lstnew(ft_strdup(" 1 2 3 "));
//	t_list *ret;
//	l->next = ft_lstnew(ft_strdup("www"));
//	ret = ft_lstmap(l, (void *)ft_lstiter, (void *)ft_lstclear);
//	while (ret->next != 0)
//	{
//		printf("%s\n", ret->content);
//		ret = ret->next;
//	}
//	printf("%s\n", ret->content);
//
//
//	return (0);
}
