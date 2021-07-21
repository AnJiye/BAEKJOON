#include <bits/stdc++.h>

using namespace std;

int n;

int f(int now)
{
	int mx = now;

	if(now*10+4<=n) mx = max(mx, f(now*10+4));
	if(now*10+7<=n)	mx = max(mx, f(now*10+7));

	return mx;
}

int main()
{
	/*
	1. 입력
	2. 재귀함수를 호출
	3. 재귀함수 내에서 더 들어가도 되는지 판단
	4. 4를 붙여보기
	5. 7을 붙여보기
	6. 다음 layer로 진입 => 3으로 다시 가기
	7. 최댓값을 끌어모음
	8. 최댓값 출력
	*/

	scanf("%d", &n);
	printf("%d\n", n);
	printf("%d", f(0));

	return 0;
}