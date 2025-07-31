#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		if (start > end)
			start--;
		else
			start++;
	}
	range[i] = start;
	return (range);
}

#include <stdio.h>

int main(void)
{
	int *arr = ft_range(3, 7);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
	return 0;
}
