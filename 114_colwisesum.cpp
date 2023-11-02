//column wise sum
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"MAtrix is:"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    cout<<"Sum is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=A[j][i];
        }
        cout<<sum<<" ";
        sum=0;
   
    }
}