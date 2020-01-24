//c463:APCS_2017_10_18_03樹狀圖分析(Tree Analyses)
#include<iostream>

using namespace std;

main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int* child[n+1];
	int parent[n+1]={0};
	int ans[n+1]={0};
	int leaf[n+1]={0},x=1;
	for (int i=1;i<=n;i++){
		int kid_num;//小孩個數 
		cin >> kid_num;
		child[i] = new int[kid_num];
		if(kid_num == 0){
			leaf[x] = i;//底 
			x++;
		}
		for(int j=0;j<kid_num;j++){
			int kid;
			cin >> kid;
			parent[kid] = i;	
		}
	}
	int root = 0;
	for (int i=1;i<=n && root==0;i++){
		if(parent[i] == 0)root = i;
	}
	
	//h(t)
	int te = 0,ans_te=0;
	for(int i=1;i<=x;i++){
		if(leaf[i]!=root){
			ans_te = 0;
			te = leaf[i];
			while(te != 0){
				te = parent[te];
				ans_te += 1;
				if(ans[te]<ans_te)ans[te] = ans_te;
				//ans_te += 1;
			}
		}
	}
	long long int sum = 0;
	for(int i=1;i<=n;i++)sum+=ans[i];
	cout << root << endl << sum;
} 
	
