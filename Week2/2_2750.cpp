#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main() {

	int n;
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=n-1;i>=0;i--)		//버블 정렬
		for(int j=0;j<i;j++)
			if(a[j]>a[j+1])	swap(a[j], a[j+1]);
	
	for(int i=0;i<n;i++)
		cout << a[i] << endl;

	return 0;
}