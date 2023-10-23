#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultat;
	int	signe;
	int	i;

	signe = 1;
	resultat = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		resultat = (resultat * 10) + (str[i] - 48);
		i++;
	}
	return (resultat * signe);
}
