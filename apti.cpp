/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f;
    int arr[n];
    for(int i=0;i>n;i++){
        cin>>f;
        arr[i]=f;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    cout<<i<<endl;
                }
            }
        }
    }
}
