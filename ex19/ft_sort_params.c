/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:07:16 by yodana            #+#    #+#             */
/*   Updated: 2018/11/07 14:16:26 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_compare(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_puts(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int i;
	char *tab;

	i = 1;
	tab = 0;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		if ((i + 1) != argc && ft_compare(argv[i], argv[i + 1]) > 0)
		{
			tab = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tab;
			i = 1;
		}
		else
			i++;
	}
	ft_puts(argv);
	return (0);
}
