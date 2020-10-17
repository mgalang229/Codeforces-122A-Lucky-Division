#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	bool ok=0;
	for(int i=1; i<=n; ++i) {
		int a[1000], cnt=0, tmp1=i, tmp2=i;
		while(tmp1!=0) {
			a[cnt++]=tmp1%10;
			tmp1/=10;
		}
		bool l=1;
		for(int j=cnt-1; j>=0; --j)
			if(a[j]!=4&&a[j]!=7)
				l=0;
		if(l)
			if(n%tmp2==0)
				ok=1;
	}
	cout << (ok?"YES":"NO") << "\n";
}
