#include<bits/stdc++.h>
int gcd(int a,int b)
{
	int gcd = 0;
	for (int i=1; i<=min(a,b); i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

