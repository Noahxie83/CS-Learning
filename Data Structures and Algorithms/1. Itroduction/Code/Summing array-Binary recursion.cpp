#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> A,int low,int high){
	    if (low==high){
		    return A[low];
	}
	int mid=(low+high)/2;
    return sum(A,low,mid)+sum(A,mid+1,high);
}
int main(){
    vector<int> A={1,4,6,9,8};
    cout<<sum(A,0,A.size()-1)<<endl;
    return 0;
}