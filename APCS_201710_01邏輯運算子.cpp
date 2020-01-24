//APCS_2017_10_01ÅÞ¿è¹Bºâ¤l 
#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cin >> a >> b >> c;
	int flag = 0;
	if((a && b) == c){
		cout << "AND" << "\n";
		flag = 1;
	}
	if((a || b) == c){
		cout << "OR" << "\n";
		flag = 1;
	}
	if((a||0)^(b||0) == c){
		cout << "XOR" << "\n";
		flag = 1;
	} 
	if(flag == 0)cout << "IMPOSSIBLE";
} 



