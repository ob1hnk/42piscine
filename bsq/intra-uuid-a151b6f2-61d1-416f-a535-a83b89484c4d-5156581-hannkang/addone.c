

void	can_square(char **map, int i, int j, int currmax)
{
	int	count;

	count = 0;
	i -= currmax - 1;
	while (count < currmax)
	{
		j -= currmax - 1;
		while (count < currmax)
		{
			if (map[i][j] == obstacle)
				return (0);
			j++;
			count++;
		}
		i++;
		count++;
	}	
}

char	**iterate(char **map, int x, int y)
{
	int	i;
	int	j;
	int	currmax;
	char	max_flag;

	i = 0;
	j = 0;
	currmax = 1;
	max_flag = 1;
	while (max_flag)
	{
		i = currmax - 1;
		while (i < x)
		{
			j = currmax - 1;
			while (j < y)
			{
				if (can_square(map, i, j, currmax))
					map[i][j]++;
				j++;
			}
			i++;
			j = 
		}
	}
}