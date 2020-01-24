//b964_APCS20160305_02¦¨ÁZ«ü¼Ð
# include<iostream>
using namespace std;
main(){
	int n,s[100],te=0,max,min;
	while(cin>>n){
		max=101;
		min=-1;
		for (int i=0;i<100;i++){
			s[i] = 0;
		}
		for (int i=0;i<n;i++){
			cin >> s[i];
			if((s[i]<60)&&(s[i]>min))min = s[i];
			if((s[i]>=60)&&(s[i]<max))max = s[i];
		}
		for (int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)continue;
				if(s[i]<s[j]){
					te = s[j];
					s[j] = s[i];
					s[i] = te;
				}
			}
		}
		cout << s[0];
		for(int j=1;j<n;j++){
			cout << " " << s[j];
		}
		if(s[0]>=60)cout << endl << "best case" << endl;
		else cout << endl << min << endl;
		if(s[n-1]<60)cout << "worst case"  << endl;
		else cout << max << endl;
	}
} 
