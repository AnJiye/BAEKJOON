#include <bits/stdc++.h>

using namespace std;

int n;
int a[16];

int f(int pos)
{
	if(pos == n) return 1;
	int res = 0;

	for(int i = 0 ; i < n ; i++)
	{
		bool flag = false;
		for(int j = 0 ; j < pos ; j++)
		{
			if(a[j] == i || a[j] - (pos-j) == i || a[j] + (pos-j) == i)		//가로, 대각선상승, 대각선하강
			{
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			a[pos] = i;
			res += f(pos+1);
		}
	}

	return res;
}

int main()
{
	scanf("%d", &n);
	printf("%d", f(0));

	return 0;
}