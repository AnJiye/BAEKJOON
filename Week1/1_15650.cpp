#include <bits/stdc++.h>

using namespace std;

int n, m;
int res[9];

void f(int pos, int ni)		//ni는 직전 수
{
	if(pos == m)
	{
		for(int i=0;i<m;i++)
			printf("%d ", res[i]);
		printf("\n");
		return;
	}
	for(int i=ni+1;i<=n;i++)
	{
		res[pos] = i;
		f(pos+1, i);
	}

}

int main()
{
	scanf("%d %d", &n, &m);
	f(0, 0);

	return 0;
}