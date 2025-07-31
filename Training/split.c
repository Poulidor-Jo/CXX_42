#include <stdio.h>
#include <stdlib.h>

int	ft_is_charset(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	ft_count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && ft_is_charset(str[i + 1])) || (str[i] != ' '
				&& str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int len)
{
	int		i;
	char	*n_str;

	i = 0;
	n_str = malloc(sizeof(char) * len + 1);
	if (!n_str)
		return (NULL);
	while (i < len)
	{
		n_str[i] = str[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}

char	**ft_split(char *str)
{
	int		i;
	int		len;
	char	**n_str;

	n_str = malloc(sizeof(char *) * ft_count_words(str) + 1);
	if (!n_str)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!ft_is_charset(*str))
		{
			len = 0;
			while (str[len] && !ft_is_charset(str[len]))
				len++;
			n_str[i] = ft_strdup(str, len);
			if (!n_str[i])
				return (NULL);
			i++;
			str += len;
		}
		else
			str++;
	}
	n_str[i] = NULL;
	return (n_str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	char *str = av[1];
	char **n_str = ft_split(str);
	int i = 0;

	printf("nombre de mots = %d\n", ft_count_words(str));
	while (i <= ft_count_words(str))
	{
		printf("%s\n", n_str[i]);
		free(n_str[i]);
		i++;
	}
	free(n_str);
}
