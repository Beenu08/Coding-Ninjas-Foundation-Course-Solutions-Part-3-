//print 2d array according to row wise and column wise
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int A[m][n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"According to Row wise:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"According to Column wise:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }

}