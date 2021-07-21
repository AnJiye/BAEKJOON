#include <bits/stdc++.h>

using namespace std;

/*
1. 입력
2. 순열 구성 -> '모든 순열'이라는 문제와 똑같음 -> 순열이 제대로 작동하는지 확인! => 차근차근 풀어나가기!
3. 2번에서 나온 순열을 가지고 조건을 만족하는가 simulation
4. 가능한 경우의 수 count
*/

int n, k;
int res[9], a[9];
bool check[9];

int f(int pos)
{
	if(pos==n)
	{
		// for(int i=0;i<n;i++)
		// 	printf("%d ", a[i]);
		// printf("\n");
		int power = 500;
		bool flag = false;
		for(int i=0; i<n; i++)
		{
			power += a[res[i]] - k;
			if(power < 500)
			{
				flag = true;
				break;
			}
		}
		if(!flag) return 1;
		return 0;
	}
	int ret = 0;
	for(int i=0;i<n;i++)
		if(!check[i])
		{
			check[i] = true;
			res[pos] = i;
			ret += f(pos+1);
			check[i] = false;
		}
	return ret;
}

int main()
{
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	//f(0);
	printf("%d", f(0));

	return 0;
}