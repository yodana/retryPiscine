

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			c++;
		i++;
	}
}
