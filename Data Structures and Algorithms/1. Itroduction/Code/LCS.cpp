#include <iostream>
#include <vector>
#include <string>
using namespace std;
int LCS1(string X,string Y,int i,int j){
    if(i==0||j==0)return 0;
    if(X[i-1]==Y[j-1])return LCS1(X,Y,i-1,j-1)+1;
    return max(LCS1(X,Y,i-1,j),LCS1(X,Y,i,j-1));
}
int LCS2(string X,string Y){
    int m=X.size(),n=Y.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(X[i-1]==Y[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}
int main(){
    string X="advantage";
    string Y="educational";
    cout<<LCS1(X,Y,X.size(),Y.size())<<endl;
    cout<<LCS2(X,Y)<<endl;
    return 0;
}