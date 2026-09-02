
#include <unistd.h>


void	ft_putchar(char c);
void	decision(int cx, int cy, int x, int y);

void	rush(int x, int y)
{
	int	cx;
	int	cy;

	cy = 1;  
	cx = 0;  
	if (x <= 0 || y <= 0)
		return ;
	decision(cx, cy, x, y);
}

void	decision(int cx, int cy, int x, int y)
{
	while (cy <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			if ((cx == 1 && cy == 1) || (cx == x && cy == y))
				ft_putchar(o); 
			else if ((cx == 1 && cy == y) || (cx == x && cy == 1))
				ft_putchar(o); 
			else if (cy == 1 || cy == y)
				ft_putchar(_); 
			else if (cx == 1 || cx == x)
				ft_putchar(|); 
			else
				ft_putchar(' ');
			cx++;
		}
		cy++;
		write(1, "\n", 1);
	}
}
