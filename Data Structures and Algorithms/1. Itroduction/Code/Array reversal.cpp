#include <iostream>
#include <vector>
using namespace std;
void reverse1(vector<int>& A,int low,int high){
    if (low<high){
	    swap(A[low],A[high]);
	    reverse1(A,low+1,high-1);
    } 
}
void reverse2(vector<int>& A,int low,int high){
    while (low<high)swap(A[low++],A[high--]);
}
int main(){
    vector<int> A={1,2,4,5,6};
    vector<int> B={2,4,6,8,9,10};
    reverse1(A,0,A.size()-1);
    for (auto i : A){
        cout<<i<<' ';
    }
    cout<<endl;
    reverse2(B,0,B.size()-1);
    for (auto i : B){
        cout<<i<<' ';
    }
    return 0;
}