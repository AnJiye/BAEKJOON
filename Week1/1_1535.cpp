#include <bits/stdc++.h>
	
using namespace std;

pair<int, int> a[21];

int n, mx;

void f(int pos, int life, int score)
{
	if(pos == n)
	{
		if(life > 0) mx = max(mx, score);
		return;
	}
	// 1. 이 사람을 선택한다.
	f(pos+1, life - a[pos].first, score + a[pos].second);
	// 2. 이 사람을 선택하지 않는다.
	f(pos+1, life, score);
}

int main()
{
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++)
		scanf(" %d", &a[i].first);
	for(int i = 0 ; i < n ; i++)
		scanf(" %d", &a[i].second);
	f(0, 100, 0);
	printf("%d", mx);

	return 0;
}