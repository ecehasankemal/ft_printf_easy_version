/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:35:19 by hece              #+#    #+#             */
/*   Updated: 2022/10/05 07:08:36 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Bu sayfa aşırı kolay print fonksiyonları var
// ft_strlen stringin uzunlugunu döndürmeme yarıyor
// ft_putchar gönderilen karakteri yazıp işlem sayısını döndürüyor
// ft_pustr gönderilen stringi yazdırım işlem sayısını döndürüyor
// ve bu sayfanın bütün olayı bu vesselam...

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

// Öncelikle bu ilk çözüşüm değil benden daha kolay ve kısa
// yapan birini gördüm ve esinlenlenerek kodu modifiye ettim
// mantıken int değerlerdede taban aritmetiği işler bu yüzden
// int değerler için küçk bir check olması adına ft_int_print
// fonksiyonunu yazdım eğer sayı '-' olursa yazdırıp pozitife
// döndürüp base işlemime atıyorum bu kadar 

int	ft_int_print(int content)
{
	if (content < 0)
	{
		ft_putchar('-');
		if (content == -2147483648)
			return (ft_convert(2147483648, "0123456789") + 1);
		content *= -1;
		return (ft_convert(content, "0123456789") + 1);
	}
	return (ft_convert(content, "0123456789"));
}

// Bu da base işlemimi sağlayan fonksiyonum burda bir buffer oluşturup
// bufferın sonundan itibaren olan kısmını ptr me eşitmedim ki
// geri geri yazdıracak oldugum şeyleri sonran başa dogru ptr min
// içine atabileyim sevgiler vesselam...

int	ft_convert(size_t data, char *base)
{
	char	*buffer;
	char	*ptr;
	int		len;

	buffer = malloc(sizeof(char) * 50);
	len = ft_strlen(base);
	ptr = &buffer[49];
	len = ft_strlen(base);
	*ptr = '\0';
	*--ptr = base[data % len];
	data = data / len;
	while (data != 0)
	{
		*--ptr = base[data % len];
		data = data / len;
	}
	free(buffer);
	return (ft_putstr(ptr));
}
