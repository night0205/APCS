//b266: 第 2 題 矩陣轉換
#include <iostream>
using namespace std;


int main() {
	int r,c,m;
	cin >> r >> c >> m;
	int s[10][10]={0},ss[10][10]={0},q[m];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)cin >> s[i][j];
	}
	for(int i=m-1;i>=0;i--)cin >> q[i];
	
	int te;
	for(int i=0;i<m;i++){
		//旋轉
		if(q[i]==0){
			te = r;
			r = c;
			c = te;
			for(int x=0;x<r;x++){
				for(int y=0;y<c;y++){
					ss[x][y] = s[y][r-1-x];
					//cout << x << ' ' << y << endl;
					//cout << y << ' ' << r-1-x << endl;
					//cout << ss[x][y] << endl << endl;
				}
			}
			for(int x=0;x<r;x++){
				for(int y=0;y<c;y++){
					s[x][y] = ss[x][y];
					ss[x][y] = 0;			
				}
			}
		}
		//翻轉
		else{
			for(int x=0;x<(r/2);x++){
				for(int y=0;y<c;y++){
					te = s[x][y];
					s[x][y] = s[r-x-1][y];
					s[r-x-1][y] = te;
				}		
			}
		}
	}
	cout << r <<' '<< c << '\n'; 
	for(int x=0;x<r;x++){
		for(int y=0;y<c;y++)cout << s[x][y] << ' '; 
	cout << endl; 
	}
		
	
	return 0;
}
