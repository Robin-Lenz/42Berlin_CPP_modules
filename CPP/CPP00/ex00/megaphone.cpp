#include <iostream>

int	main(int ac, char **av)
{
	char	c;
	int		i = 0;
	int		j = 0;

	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i++;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				c = std::toupper(av[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
	}
	std::cout<<"\n";
	return (0);
}
