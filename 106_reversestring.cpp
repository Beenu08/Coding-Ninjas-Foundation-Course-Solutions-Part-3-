//reverse of a string
#include<iostream>
using namespace std;
int length(char c[]){
    int count=0;
    for(int i=0;c[i]!='\0';i++){
        count++;
    }
    return count; //ab cd
}
void reverse(char c[]){
    int l= length(c);
    int i=0;
    int j=l-1;
    while(i<j){
        char temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char c[100];
    cout<<"enter string:";
    cin.getline(c,100);
    reverse(c);
    cout<<c<<endl;
}