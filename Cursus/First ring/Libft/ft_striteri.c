/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:32:59 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/25 09:58:46 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void uppercase(unsigned int index, char *ch)
{
    *ch = toupper(*ch);
}

int main()
{
	char str[] = "hello";
    ft_striteri(str, uppercase);
    return (0);
} */
