/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaimaki <ezaimaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:04:27 by ezaimaki          #+#    #+#             */
/*   Updated: 2026/08/22 17:40:34 by ezaimaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_grid(char *str, char *grid);
void	ft_parse_str(char *str, char *input);
int ft_check_valid(char *part_main, char *part_check);
int ft_build_grid(char *grid, char *col, char *row, int i);
int	ft_check_row (char *grid, char *row, int row_num);
int	ft_check_row_back (char *grid, char *row, int row_num);
int	ft_check_col(char *grid, char *col, int col_num);
int	ft_check_col_back(char *grid, char *col, int col_num);

// returns 0 if no solution, 1 if yes AND builds a grid
int	ft_grid(char *str, char *grid)
{
	char input[16];
	char col[8];
	char row[8];
	int	i;

	ft_parse_str(str, input);
	i = 0;
	while (i < 16)
	{
		if (i < 8)
			col[i] = input[i];
		else
			row[i - 8] = input[i];
	}
	if (ft_check_valid(col, row) == 0 || ft_check_valid(row, col) == 0)
		return (0);
	if (ft_build_grid(grid, col, row, 0) == 0)
		return (0);
	else
		return (1);
}

void	ft_parse_str(char *str, char *input)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 = 0)
		{
			input[j] = str[i];
			j++;
		}
		i++;
	}

}

// returns 0 if some invalid numbers, returns 1 if all okay.
int ft_check_valid(char *part_main, char *part_check)
{
	int	i;
	int is_1;

	is_1 = 0;
	i = 0;
	while (i < 4)
	{
		if (part_main[i] < '1' || part_main[i] > '4')
			return (0);
		if (part_main[i] == '4')
		{
			if (part_main[i + 4] != '1')
				return (0);
		}
		if (part_main[i] == '1')
		{
			if (part_main[i + 4] == '1')
				return (0);
		}
		if ((part_main[i] - 48) + (part_main[i + 4] - 48) > 5)
			return (0);
		if (part_main[i] == '1')
			{
				if (is_1 == 1)
					return (0);
				else
					is_1 = 1;
			}
		i++;
	}
	is_1 = 0;
	while (i < 8)
	{
		if (part_main[i] == '4')
		{
			if (part_main[i - 4] != '1')
				return (0);
		}
		if (part_main[i] == '1')
		{
			if (part_main[i - 4] == '1')
				return (0);
		}
		if (part_main[i] == '1')
			{
				if (is_1 == 1)
					return (0);
				else
					is_1 = 1;
			}
		i++;
	}
	if (part_main[0] == '1' || part_main[3] == '1' || part_main[4] == '1' || part_main[7] == '1')
	{
		if (!(part_check[0] == '1' || part_check[3] == '1' || part_check[4] == '1' || part_check[7] == '1'))
			return (0);
	}
	return (1);
}

//returns 0 if no solutions, 1 if yes
int ft_build_grid(char *grid, char *col, char *row, int i)
{
	char j;
	j = '1';
	if (i == 16)
		return 1;
	while (j <= '4')
	{
		if (j == grid[(i/4) * 4] || j == grid[(i/4) * 4 + 1] || j == grid[(i/4) * 4 + 2] || j == grid[(i/4) * 4 + 3]
		|| j == grid[i%4] || j == grid[(i%4) + 4] || j == grid[(i%4) + 8] || j == grid[(i%4) + 12])
		{
			j++;
			continue;
		}
		grid[i] = j;
		if (i/4 == 3)
		{
			if (ft_check_col(grid, col, i%4) == 0 || ft_check_col_back(grid, col, i%4) == 0)
			{
				grid[i] = '0';
				j++;
				continue;
			}
		}
		if (i%4 == 3)
		{
			if (ft_check_row (grid, row, i/4) == 0 || ft_check_row_back (grid, row, i/4) == 0)
			{
				grid[i] = '0';
			    j++;
				continue;
			}
		}
		if (ft_build_grid(grid, col, row, i + 1) == 0)
		{
			grid[i] = '0';
			j++;
			continue;
		}
		else
			return 1;
	}
	return 0;

}

//returns 1 if placement ok, 0 if not
int	ft_check_row (char *grid, char *row, int row_num)
{
	int	counter;
	int	vis_ammount;
	char visible;

	counter = row_num *4;
	visible = grid[counter];
	vis_ammount = 1;
	while (counter < (row_num * 4) + 4)
	{
		if (visible < grid[counter])
			{
				vis_ammount++;
				visible = grid[counter];
			}
		counter++;
	}
	if (row[row_num] == vis_ammount + '0')
		return 1;
	return 0;
}

int	ft_check_row_back (char *grid, char *row, int row_num)
{
	int	counter;
	int	vis_ammount;
	char visible;

	counter = (row_num *4) + 3;
	visible = grid[counter];
	vis_ammount = 1;
	while (counter >= row_num * 4)
	{
		if (visible < grid[counter])
			{
				vis_ammount++;
				visible = grid[counter];
			}
		counter--;
	}
	if (row[row_num + 4] == vis_ammount + '0')
		return 1;
	return 0;
}

int	ft_check_col(char *grid, char *col, int col_num)
{
	int	counter;
	int	vis_ammount;
	char visible;

	counter = col_num;
	visible = grid[col_num];
	vis_ammount = 1;
	while (counter <= col_num + 12)
	{
		if (visible < grid[counter])
			{
				vis_ammount++;
				visible = grid[counter];
			}
		counter+= 4;
	}
	if (col[col_num] == vis_ammount + '0')
		return 1;
	return 0;
}

int	ft_check_col_back(char *grid, char *col, int col_num)
{
	int	counter;
	int	vis_ammount;
	char visible;

	counter = col_num + 12;
	visible = grid[col_num + 12];
	vis_ammount = 1;
	while (counter >= col_num)
	{
		if (visible < grid[counter])
			{
				vis_ammount++;
				visible = grid[counter];
			}
		counter-= 4;
	}
	if (col[col_num + 4] == vis_ammount + '0')
		return 1;
	return 0;
}


// void ft_build_grid(char **grid, char *col, char *row)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (col[i] == '4')
// 		{
// 			grid[0][i] = '1';
// 			grid[1][i] = '2';
// 			grid[2][i] = '3';
// 			grid[3][i] = '4';
// 		}
// 		i++;
// 	}
// 	while (i < 8)
// 	{
// 		if (col[i] == '4')
// 		{
// 			grid[3][i] = '1';
// 			grid[2][i] = '2';
// 			grid[1][i] = '3';
// 			grid[0][i] = '4';
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (row[i] == '4')
// 		{
// 			grid[i][0] = '1';
// 			grid[i][1] = '2';
// 			grid[i][2] = '3';
// 			grid[i][3] = '4';
// 		}
// 		i++;
// 	}
// 	while (i < 8)
// 	{
// 		if (row[i] == '4')
// 		{
// 			grid[i][3] = '1';
// 			grid[i][2] = '2';
// 			grid[i][1] = '3';
// 			grid[i][0] = '4';
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (col[i] == '1')
// 			grid[0][i] = '4';
// 	}
// 	while (1 < 8)
// 	{
// 		if (col[i] == '1')
// 			grid[3][i] = '4';
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		if (row[i] == '1')
// 			grid[i][0] = '4';
// 	}
// 	while (1 < 8)
// 	{
// 		if (row[i] == '1')
// 			grid[i][3] = '4';
// 	}
// }