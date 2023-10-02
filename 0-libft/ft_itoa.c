/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:01:59 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 11:20:00 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static int	ft_div(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (nb > 1)
	{
		i *= 10;
		nb--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		cop_len;
	char	*dest;

	i = 0;
	len = ft_intlen(n);
	cop_len = len;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		dest[0] = '-';
		i++;
		len--;
	}
	while (i < cop_len)
		dest[i++] = ((n / ft_div(len--)) % 10) + 48;
	dest[i] = '\0';
	return (dest);
}
