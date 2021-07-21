#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[6][6];
bool check[6][6];

int f(int y,int x)			//y는 세로, x는 가로
{
	if(y==n) return 0;				//끝나는 지점 생각하기
	if(x==m) return f(y+1, 0);		//가로 초과
	int mx = 0;
	if(x+1<m && y+1<n && !check[y][x] && !check[y][x+1] && !check[y+1][x+1])		//첫번째 부메랑 ':
	{
		check[y][x] = check[y][x+1] = check[y+1][x+1] = true;
		mx = max(mx, f(y, x+1) + a[y][x] + 2 * a[y][x+1] + a[y+1][x+1]);
		check[y][x] = check[y][x+1] = check[y+1][x+1] = false;
	}
	if(x+1<m && y+1<n && !check[y][x+1] && !check[y+1][x] && !check[y+1][x+1])		//두번째 부메랑	.:
	{
		check[y][x+1] = check[y+1][x] = check[y+1][x+1] = true;
		mx = max(mx, f(y, x+1) + a[y][x+1] + a[y+1][x] + 2 * a[y+1][x+1]);
		check[y][x+1] = check[y+1][x] = check[y+1][x+1] = false;
	}
	if(x+1<m && y+1<n && !check[y][x] && !check[y+1][x] && !check[y+1][x+1])		//세번째 부메랑 :.
	{
		check[y][x] = check[y+1][x] = check[y+1][x+1] = true;
		mx = max(mx, f(y, x+1) + a[y][x] + 2 * a[y+1][x] + a[y+1][x+1]);
		check[y][x] = check[y+1][x] = check[y+1][x+1] = false;
	}
	if(x+1<m && y+1<n && !check[y][x] && !check[y][x+1] && !check[y+1][x])			//네번째 부메랑 :'
	{
		check[y][x] = check[y][x+1] = check[y+1][x] = true;
		mx = max(mx, f(y, x+1) + 2 * a[y][x] + a[y][x+1] + a[y+1][x]);
		check[y][x] = check[y][x+1] = check[y+1][x] = false;
	}
	return max(mx, f(y, x+1));			// 버리는 것도 포함해야 함
}

int main()
{
	scanf("%d %d", &n, &m);			//n은 세로, m은 가로
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	printf("%d",f(0, 0));

	return 0;
}