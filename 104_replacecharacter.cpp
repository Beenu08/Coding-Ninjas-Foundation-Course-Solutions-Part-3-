/*
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/
#include<iostream>
using namespace std;
void replace(char c[],char c1, char c2){
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==c1)
        c[i]=c2;
    }
    for(int i=0;c[i]!='\0';i++){
        cout<<c[i];
    }
}
int main(){
    char c[100];
    cout<<"Enter string:";
    cin>>c;
    char c1,c2;
    cin>>c1>>c2;
    replace(c,c1,c2);
}