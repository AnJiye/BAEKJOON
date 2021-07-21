#include <bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
	//아래 2줄을 쓰면 입출력에 대한 문제가 거의 없어짐
	ios::sync_with_stdio(false);		//cin cout과 scanf printf를 혼용해서 쓰면 중간에 동기화 작업 有 => 그 동기화 작업 없앰
	cin.tie(NULL);						

	int n;
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> a[i];
	
	sort(a, a+n);		// [0, n) 정렬	=> O(nlogn) => C++ => 웬만하면 sort() 함수 쓰기!
	// qsort()	=> 배열을 주로 이용(C언어에서 주로 이용), 최악의 경우 n^2이 나올 수 있음
		
	for(int i=0;i<n;i++)
		cout << a[i] << '\n';

	return 0;
}