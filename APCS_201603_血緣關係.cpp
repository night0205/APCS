#include <iostream>
#include <vector>

using namespace std;

int parent[100001];
int height[100001];
vector<int> child[100001];

int findmax(vector<int> child[], int root, int height[]){
	int maxlen = -1;
	int maxh[2] = {-1, -1};
	for(int i = 0; i < child[root].size(); i++){
		int c = child[root][i];
		int len = findmax(child, c, height);
		if(len > maxlen)
			maxlen = len;
		if(height[c] > maxh[0]){
			maxh[1] = maxh[0];
			maxh[0] = height[c];
		}
		else if(height[c] > maxh[1])
			maxh[1] = height[c];
	}
	height[root] = maxh[0]+1;
	if((maxh[0]+maxh[1]+2) > maxlen)
		maxlen = maxh[0] + maxh[1] + 2;
	return maxlen;
}

int main(){
	int N;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> N){
		for(int i = 0; i < 100001; i++){
			child[i].clear(); 
		}
		for(int i = 0; i < N; i++){
			parent[i] = -1;
		}
		for(int i = 0; i < N; i++){
			height[i] = 0;
		}
		for(int i = 0; i < N-1; i++){
			int p, c;
			cin >> p >> c;
			child[p].push_back(c);
			parent[c] = p;
		}
		//find root
		int root = 0;
		while(parent[root] != -1){
			root = parent[root];
		}
		int maxlen = findmax(child, root, height);	
		cout << maxlen << '\n';
	}
	return 0;
} 
