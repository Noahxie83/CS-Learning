#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
void shift1(vector<int> &A,int k){
    int n=A.size();
    k%=n;
    while(k--){
        int temp=A[0];
        for(int i=1;i<n;i++)A[i-1]=A[i];
        A[n-1]=temp;
    }
}
void shift2(vector<int>& A,int k){
    int n=A.size();
    k%=n;
    if(k==0)return;
    int count=gcd(n,k);
    for(int start=0;start<count;start++){
        int current=start,prev=A[current];
        while(true){
            int next=(current-k+n)%n;
            swap(prev,A[next]);
            current=next;
            if(current == start)break;
        }
    }
}
void shift3(vector<int>& A,int k){
    int n=A.size();
    k%=n;
    reverse(A.begin(),A.begin()+k);
    reverse(A.begin()+k,A.end());
    reverse(A.begin(),A.end());
}
int main(){
    vector<int> A={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},B=A,C=A;
    shift1(A,6);
    shift2(B,6);
    shift3(C,6);
    for(auto i:A)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:B)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:C)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}