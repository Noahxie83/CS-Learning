#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> A,int n){
	return (n<1)?0:sum(A,n-1)+A[n-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<sum(A,n)<<endl;
    return 0;
}