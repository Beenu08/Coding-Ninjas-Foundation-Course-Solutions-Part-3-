//how too pass 2d array using function
/*
in memory there is not matrix ...there is only linear array which determine the position
using column*i+j   
where row and column is previously defined and i,j are taken from user.
we also have to pass array using function by passing column
*/
#include<iostream>
using namespace std;
void print(int A[][5], int m, int n){  //here no. of columns passes because under the 1d visiualisation of memory 
// it need to point location which is point using formulae i.e., column*i+j;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int A[6][5]={{1,2,3},{4,5,6},{7,8,9}};  //initialization while declaration
    /*
    //how to call this
    print(A,3,)
    void print(int A[][3], int 3, int 3)
    */
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>A[i][j];
    //     }
    // }
    print(A,6,5);
}