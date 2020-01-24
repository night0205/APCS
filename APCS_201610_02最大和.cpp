//c295_APCS20161029_02³Ì¤j©M
#include<iostream>
using namespace std;
main(){
	int n,m;
	cin >> n >> m;
	int s[m],max[n],ans=0;
	for(int i=0;i<n;i++){
		max[i]=-1;
		for(int j=0;j<m;j++){
			cin >> s[j];
			if(s[j]>max[i])max[i]=s[j];
		}
		ans+=max[i];
	}
	cout << ans << "\n";
	int t=-1;
	for(int i=0;i<n-1;i++){
		if(ans%max[i]==0){
			cout << max[i] << " "; 
			t=0;
		}
	}
	if(ans%max[n-1]==0){
		cout << max[n-1]; 
		t=0;
	}
	if(t==-1)cout << "-1";
	
}
