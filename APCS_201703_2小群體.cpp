//2017_03APCS_2_�p�s�� 
#include <iostream>
using namespace std;

main(){
	int n, ans=0,x;
	cin >> n;
	int ol[n]={0};//���Q�l���� 0 
	int N[n];//�B�� 
	for (int i=0; i<n; i++){
		cin >> N[i];
	}

	for (int i=0; i<n; i++){
		if (ol[i] == 0){
			x = i;
			while (ol[x]==0){
				ol[x]=1;
				x = N[x];
			}
				ans +=1;
		}	
	} 
	cout << ans;
	
	return 0;
} 
