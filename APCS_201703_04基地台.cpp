//APCS_201703_04°ò¦a¥x
#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int n,k;
	cin >> n >> k;
	int p[n];
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	sort(p,p+n);
	int beg,cnt;
	int min = 1,max = p[n-1]-p[0];
	int mid = (min+max)/2;
	while(min != max){
		beg = p[0];
		cnt = 1;
		for(int i=0;i<n;i++){
			if(beg + mid < p[i]){
				beg = p[i];
				cnt++;
			}
			if(cnt > k)break;
		}
		if(cnt > k){
			min = mid + 1;
			mid = (min+max)/2;
		}
		else if(cnt <= k){
			max = mid;
			mid = (min+max)/2;
		}
	}
	cout << mid;	
}
