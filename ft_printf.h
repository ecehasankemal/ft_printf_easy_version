/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:32:33 by hece              #+#    #+#             */
/*   Updated: 2022/10/03 10:32:35 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

// Burda projemisin header kısmını yapıyoruz pek bir olayı yok
// ilk başta tanımlı değilse FT_PRINTF_H olarak tanıtıyoruz
// tanımlıysa FT_PRINTF_H olarak isimlendiriyoruz bu ikisi
// aynı isme sahip olmak zorunda MAHMUT bile olabilir ama
// proje ile uyumlu olması adına bu isim

// Projem için gerekli olacak kütüphanelerimi ekledim malloc için
// stdlib.h macrolar için stdarg.h systemcall fonksiyonlar için de
// unistd.h ımı çagırdım

// daha sonra projemde kullandığım fonksiyonları buraya linkledim

// endiff le de işi bitirdim vesselam...

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_tpye_control(char c, va_list arg);
int			ft_printf(const char *str, ...);
int			ft_int_print(int nb);
int			ft_convert(size_t data, char *base);
size_t		ft_strlen(const char *str);

#endif
