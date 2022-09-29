/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparra-t <rparra-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:18:03 by rparra-t          #+#    #+#             */
/*   Updated: 2022/09/27 18:47:33 by rparra-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	c;

	c = 61;
	printf("%i",ft_isalnum(c));
}
*/

/*
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 101;
	printf("%i",ft_isalpha(c));
}
*/

/*
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 127;
	printf("%i",ft_isascii(c));
}
*/
/*
int	ft_isprint(int c);

int	main(void)
{
	int	c;

	c = 127;
	printf("%i",ft_isprint(c));
}
*/

/*
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	c;

	c = 48;
	printf("%i",ft_isdigit(c));
}
*/

/*
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);

int	main(void)
{
	int		c;
	char	str[] = "hola";
	int		n;

	c = '$';
	n = 2;
	ft_memset(str, c, n);
	printf("%s", str);
}

*/

/*
#include <stdio.h>

size_t ft_strlen(const char *s);

int	main(void)
{
   char	s [13] = "Hola a todos";

   printf("%zu",ft_strlen(s));
   return (0);
}
*/

/*
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	s[] = "hola";
	int		n;

	n = 2;
	ft_bzero(s, n);
	printf("%s", s);
}
*/


// #include <stdio.h>
// #include <string.h>

// void	*ft_memcpy(void *str1, const void *str2, size_t n);

// int	main(void)
// {
// 	char str1[] = "hola";
// 	char str2[4];
// 	int		n;

// 	n = 2;
// 	//ft_memcpy(str1, str2, n);
// 	printf("MEMCPY %s", memcpy(str1, str2, n));
// 	//printf("\nFT_MEMCPY %s", ft_memcpy(str1, str2, n));
// 	//printf("%s", str2);
// }

// int main () {
//    const char src[50] = "";
//    char dest[50] = "Hello";
//    //printf("Before memcpy dest = %s\n", dest);
//    memcpy(dest, src, 14);
//    printf("memcpy = %s\n", dest);
//    printf("\nFT_MEMCPY %s", ft_memcpy(dest, src, 14));
//    return(0);
// }

// #include <stdio.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char	dst[4] = "hola";
// 	char	src[4];
// 	int		dstsize;

// 	dstsize = 4;
// 	printf("%zu", ft_strlcpy(dst, src, dstsize));
// }

// #include <stdio.h>

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char	dst[4] = "hola";
// 	char	src[4] = "Adri";
// 	int		dstsize;

// 	dstsize = 4;
// 	printf("%zu", ft_strlcat(dst, src, dstsize * sizeof(dst[0])));
// }

// #include <stdio.h>

// char	*ft_strchr(const char *s, int c);

// int	main(void)
// {
// 	char	s[6] = "huola";
// 	int		c = 'u';

// 	printf("%s", ft_strchr(s, c));
// }

#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	s[11] = "holajefazos";
	int		c = 'o';

	printf("%s", ft_strrchr(s, c));
}
