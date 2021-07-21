#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	vector<int> v;
	for(int i=0;i<m;i++)
		v.push_back(1);
	for(int i=0;i<n-m;i++)
		v.push_back(0);

	do
	{
		/*for(int i=0;i<n;i++)
			printf("%d ", v[i]);
		printf("\n");*/
		for(int i=0;i<n;i++)
			if(v[i]==1) printf("%d ", i+1);
		printf("\n");
	} while(prev_permutation(v.begin(), v.end()));


	return 0;
}