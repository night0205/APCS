//APCS2017_03_03數字龍捲風
#include <iostream>
using namespace std;

int main(){
	int n,path;//n*n,0lift 1pu 2right 3down
	cin >> n >> path;
	int N[n+2][n+2];//多開外框 
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin >> N[i+1][j+1];//+1才在正中間 
		}
	}
	//外圍設為 -1 
	for (int i=0;i<n+2;i++){
		N[i][0] = -1;
		N[0][i] = -1;
		N[n+1][i] = -1;
		N[i][n+1] = -1;
	}
	
	int diri[4] = {0,-1,0,1};//順時規律 
	int dirj[4] = {-1,0,1,0};
	int nowi = n/2+1, nowj = nowi;
	int cnt = 0;
	while(N[nowi][nowj] >= 0){
		for (int i=0; i<cnt/2+1 && N[nowi][nowj] >= 0;i++){
			cout << N[nowi][nowj];
			nowi += diri[path];
			nowj += dirj[path];
		}
		cnt++;
		path = (path+1)%4;
	} 
	cout << endl;
} 











