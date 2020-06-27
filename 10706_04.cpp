#include <iostream>
#include <algorithm>

using namespace std;

long long int S(int A[], int i, int m, int j){	
	int cnt = 0, tmp = 0, t = 0;
	for(int x = i; x < m; x++){
		t = 0;
		for(int y = m+tmp; y < j && A[x] != 1; y++){
			if(A[y] == 9)
				break;
			if(A[x] > A[y]){
				cnt++;
				t++;
			}
			else
				break;
		}
		for(x; x < m; x++){
			if(A[x] == A[x+1])
				cnt += t;
			else
				break;
		}
	}
	return cnt;
}

long long int W(int A[], int i, int j){
	if(j-i == 1)
		return 0;
	if(j-i == 2){
		if(A[i] > A[j-1])
			return 1;
		return 0;
	}
	int cnt = 0;
	int m = (i+j)/2;
	cnt += W(A, i, m);
	cnt += W(A, m, j);
	sort(A+i, A+m);
	sort(A+m, A+j);
	return cnt + S(A, i, m, j);
}

main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin >> A[i];
	cout << W(A, 0, n);	
}
