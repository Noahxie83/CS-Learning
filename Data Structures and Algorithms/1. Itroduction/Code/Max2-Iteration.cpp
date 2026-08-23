#include <iostream>
#include <vector>
using namespace std;
void max2_1(vector<int> A,int low,int high,int& x1,int& x2){
    int i;
    for(x1=low,i=low+1;i<high;i++){
        if(A[x1]<A[i])
            x1=i;
    }
    for(x2=low,i=low+1;i<x1;i++){
        if(A[x2]<A[i])
            x2=i;
    }
    for(i=x1+1;i<high;i++){
        if(A[x2]<A[i])
            x2=i;
    }
}
void max2_2(vector<int> A,int low,int high,int &x1,int &x2){
	if (A[x1=low]<A[x2=low+1]) swap(x1,x2);
	for (int i=low+2;i<high;i++)
		if (A[x2]<A[i])
			if (A[x1]<A[x2=i])
				swap(x1,x2);
}
int main(){
    vector<int> A={1,3,6,9,5,10};
    int x1=0,x2=0;
    max2_1(A,0,A.size(),x1,x2);
    cout<<x1<<endl<<x2<<endl;
    max2_2(A,0,A.size(),x1,x2);
    cout<<x1<<endl<<x2<<endl;
    return 0;
}