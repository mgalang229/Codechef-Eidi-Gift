#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[3], c[3];
		for(int i=0; i<3; ++i)
			cin >> a[i];
		for(int i=0; i<3; ++i)
			cin >> c[i];
		bool ok=1;
		for(int i=0; i<3; ++i)
			for(int j=0; j<3; ++j) {
				if(i==j)
					continue;
				if(a[i]==a[j]&&c[i]!=c[j])
					ok=0;
				else if(a[i]<a[j]&&c[i]>=c[j])
					ok=0;
				else if(a[i]>a[j]&&c[i]<=c[j])
					ok=0;
			}
		cout << (!ok?"NOT FAIR":"FAIR") << "\n";
	}
}
