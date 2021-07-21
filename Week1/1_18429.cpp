//틀림...ㅠㅠ
#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[9];
bool check[9];
int res = 0;
//int path[9];

int f(int pos, int weight)
{
	if(pos == n)
	{
		// for(int i=0;i<n;i++)
		// 	printf("%d ", path[i]);
		// printf("\n");
		res++;
	}
	for(int i=0;i<n;i++)
	{
		if(!check[i])
		{
			check[i] = true;
			weight = weight + a[i] - k;
			if(weight < 500)
			{
				check[i] = false;
				continue;
			}
			//path[pos] = i;
			f(pos+1, weight);
			check[i] = false;
		}
	}
	return res;
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("%d", f(0, 500));

	return 0;
}