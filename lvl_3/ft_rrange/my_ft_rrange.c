#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_abs(int a, int b)
{
	return (a - b >= 0 ? a - b : b - a);
}

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = ft_abs(start, end) + 1;
	int	*arr = (int *)malloc(len * sizeof(int));

	if (end <= start)
	{
		while (end <= start)
		{
			arr[i] = end;
			i++;
			end++;
		}
	}
	else if (end > start)
	{
		while (end >= start)
		{
			arr[i] = end;
			i++;
			end--;
		}
	}
	return (arr);
}

int main()
{
	int start = 1;
	int end = -5;
	int *range = ft_rrange(start, end);

	printf("Array from %d to %d: ", start, end);
	for (int i = 0; i <= abs(end - start); ++i)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);
	return (0);
}
