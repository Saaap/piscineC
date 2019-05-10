#include <unistd.h>

void ft_is_negative(int n)
{
	if(n < 0)
	{
		write(1,"N\n", 2);
	}
	else
	{
		write(1,"P\n", 2);
	}
	
}
int main(void)
{
	ft_is_negative(-1);
	ft_is_negative(-8);
	ft_is_negative(-7);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(251);
	ft_is_negative(-251);
	ft_is_negative(8);

	return 0;
}
