/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebicerye <ebicerye@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:07:14 by ebicerye          #+#    #+#             */
/*   Updated: 2022/02/22 15:54:33 by ebicerye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	printf("%d", ft_strcmp("Emir", "Emir1"));
	printf("\n%d", ft_strcmp("Emir", "Em"));
	printf("\n%d", ft_strcmp("Em", "Emir"));
	printf("\n%d", ft_strcmp("Emir", "Emir"));
}*/
