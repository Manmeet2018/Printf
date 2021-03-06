/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:20:38 by maparmar          #+#    #+#             */
/*   Updated: 2019/02/16 00:48:25 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i] != 0)
	{
		(*f)(&s[i++]);
	}
}
