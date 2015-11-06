#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, m;
	int k = 1;
	while(1){
		
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;
		else
		{
			char mat[n+2][m+2];
			char c;
			for(int i = 0; i < n + 2; i++)
			{
				for(int j = 0; j < m + 2; j++)
				{
					if(i == 0 || j == 0 || j == m +1 || i == n + 1)
						mat[i][j] = 0;
					else
					{
						
						cin >> mat[i][j] ;
					}
				}
				
			}

			if(k != 1)
				printf("\n");
			printf("Field #%d:\n", k);
			for(int i = 1 ; i <= n ; i++)
			{
				for(int j = 1; j <= m ; j++)
				{
					if(mat[i][j] == '*')
						printf("%c", mat[i][j]);
					else
					{
						int count = 0;
						if(mat[i - 1][j] == '*')
							count++;
						if(mat[i][j - 1] == '*')
							count++;
						if(mat[i + 1][j] == '*')
							count++;
						if(mat[i][j + 1] == '*')
							count++;
						if(mat[i - 1][j - 1] == '*')
							count++;
						if(mat[i - 1][j + 1] == '*')
							count++;
						if(mat[i + 1][j - 1] == '*')
							count++;
						if(mat[i + 1][j + 1] == '*')
							count++;

						printf("%d", count);
					}
				}
				printf("\n");
			}

			k++;
		}
	}

	return 0;

}