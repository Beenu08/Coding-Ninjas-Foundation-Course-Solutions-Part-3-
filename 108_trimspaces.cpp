//remove space
//example
//abc def gh i    as input
//abcdefghi  as output
#include<iostream>
using namespace std;
int main(){
    char c[100];
    cin.getline(c,100);
    int i=0,j=0;
    while(c[i]){
        if(c[i]!=' ')
        c[j++]=c[i];
        i++;
    }
    c[j]='\0';
    cout<<c<<endl;
}