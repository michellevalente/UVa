#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int seq[n];
		int res[n]; 
		int joly = 1;
		for(int i = 0; i < n; i++)
		{
			cin >> seq[i];
			res[i] = 0;
		}
		for(int i = 0; i < (n - 1); i++)
			res[abs(seq[i] - seq[i+1])] = 1;
		for(int i = 1; i < n; i++)
		{
			if(!res[i]){
				joly = 0;
			}
		}
		if(!joly)
			cout << "Not jolly\n";
		else
			cout << "Jolly\n";

	}

	return 0;
}