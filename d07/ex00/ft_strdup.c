#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int index = 0;
	
	while (src[index] != '\0')
	{
		index++;
	}
	return index;

}
char	*ft_strdup(char *src)
{
	int longueur;
	int	index;
	char	*dest;
	longueur = ft_strlen(src);
	dest = malloc(sizeof(char*) * longueur+1);
	if(dest == NULL)
	{
		return NULL;
	}
	index = 0;
	while (src[index]!='\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	
	return dest;

}

int	main(void)
{

	char *src = "Nelson est fatigué";
	printf("Longueur de src %s ", strdup(src));
	printf("Longueur de src ft_strlen %s\n", ft_strdup(src));
	return 0;
}
