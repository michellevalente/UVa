#include <cstdio>
#include <algorithm>

int main()
{
	int i, j, i2, j2;
	int cycle;
	int max_cycle;
	while(scanf("%d %d", &i, &j) != EOF)
	{
		i2 = i;
		j2 = j;
		max_cycle = 0;
		if(i > j)
			std::swap(i,j);

		while(i <= j)
		{
			cycle = 1;
			unsigned int n = i;
			while(n != 1)
			{
				if(n %2 == 0)
					n /= 2;
				else
					n = 3*n +1;
				cycle++;
			}

			if(cycle > max_cycle)
				max_cycle = cycle;

			i++;

		}
		printf("%d %d %d\n", i2, j2, max_cycle);
	
	}
	return 0;
	
}