#include <iostream>
#include <vector>
using namespace std;
void max2(vector<int> A,int low,int high,int &x1,int &x2) {
	 if(low+2==high){
        if(A[low]>A[low+1]){
            x1=low;
            x2=low+1;
        }
        else{
            x1=low+1;
            x2=low;
        }
        return;
    }
    if(low+3==high){
        if(A[low]>A[low+1]){
            x1=low;
            x2=low+1;
        }
        else{
            x1=low+1;
            x2=low;
        }
        if(A[low+2]>A[x1]){
            x2=x1;
            x1=low+2;
        }
        else if(A[low+2]>A[x2]){
            x2=low+2;
        }
        return;
    }
	int mid=(low+high)/2;
	int x1L,x2L;max2(A,low,mid,x1L,x2L);
	int x1R,x2R;max2(A,mid,high,x1R,x2R);
	if (A[x1L]> A[x1R]){
		x1=x1L;x2=(A[x2L]>A[x1R])?x2L:x1R;
	} 
	else {
		x1=x1R;x2=(A[x1L]>A[x2R])?x1L:x2R;
	}
}
int main(){
    vector<int> A={1,3,6,9,5,10};
    int x1=0,x2=0;
    max2(A,0,A.size(),x1,x2);
    cout<<x1<<endl<<x2<<endl;
    return 0;
}