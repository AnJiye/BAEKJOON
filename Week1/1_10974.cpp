#include <bits/stdc++.h>

using namespace std;

int n;
int res[9];
bool check[9];

void f(int pos)
{
	if (pos == n)
	{
		for(int i = 0 ; i < n ; i++)
			printf("%d ", res[i]);
		printf("\n");
		return;
	}
	for(int i = 1 ; i <= n ; i++)
		if(!check[i])				// 사용했는지 확인
		{
			check[i] = true;		// 내 층에서 사용했다는 것을 표시
			res[pos] = i;
			f(pos+1);				
			check[i] = false;		// 반납
		}
}

int main()
{
	scanf("%d", &n);
	f(0);

	return 0;
}