//APCS2017_03_01秘密差 
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string x;
    cin>>x;
    int sum=0;
    for(int i=0; i<x.length(); i++)
    {
        if (i%2)
            sum+=int(x[i]-'0');//ASCII '0'編號48，x為字元，減'0'編號換算出數字輸出 
        else
            sum-=int(x[i]-'0');

	}
    if (sum<0) cout<<-1*sum<<endl;
    else cout<<sum<<endl;
}
