#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int num;
		string out ;
		cin >> num;

		if(num < 10)
		{
			cout << num << endl;
			continue;
		}

		while(num >= 10)
		{
			bool invalido = 1;
			for(int i = 9; i >= 2; i--)
			{
				if(num % i == 0)
				{
					invalido = 0;
					out += i + '0';
					num /= i;
				}
			}
			if(invalido){
				cout << "-1" << endl;
				break;
			}

		}
		sort(out.begin(), out.end());
		if(num < 10)
			cout << out << endl;
	}
}