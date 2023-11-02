/*
print 2d array 
print 1st row Row time and 
2nd row Row-1 time
and so on

example
3 3
1 2 3
4 5 6 
7 8 9

Output:
1 2 3
1 2 3
1 2 3
4 5 6 
4 5 6
7 8 9
*/
#include<iostream>
using namespace std;
void print(int A[][100],int m, int n){
    int t=m;
    for(int i=0;i<m;i++){
        for(int k=t;k>0;k--){
        for(int j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
    }
    t--;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int A[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    print(A,m,n);
}