#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	string s;
	while(cin >> s && s != "#")
	{
		
		if(!next_permutation(s.begin(), s.end()))
			cout << "No Successor" << endl;
		else
			cout << s << endl;
	}
}