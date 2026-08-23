#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> S(n,0);
    for(int i=0;i<n;i++)
        cin>>S[i];
    // 取前三个元素
    int x=S[0],y=S[1],z=S[2],maxValue,minValue,result;
    // 找三个数中的最大值
    maxValue=max(x,max(y,z));
    // 找三个数中的最小值
    minValue=min(x,min(y,z));
    // 剩下那个既不是最大也不是最小
    if(x!=maxValue && x!=minValue){
        result=x;
    }
    else if(y!=maxValue && y!=minValue){
        result=y;
    }
    else {
        result=z;
    }
    cout<<"非极端元素为："<<result<<endl;
    return 0;
}