/*
Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 
1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
#include<iostream>
using namespace std;
int length(char c[]){
    int count=0;
    for(int i=0;c[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverstring(char c[]){
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
    int p=0,d=0;
    for(int i=0;i<=l;i++){
        if(c[i]==' ' || c[i]=='\0'){
            for(int k=d-1;k>=p;k--){
                cout<<c[k];
            }
            cout<<" ";
            p=d;
        }
        else{
              c[d++]=c[i];
        }
    }
}
int main(){
    char c[1000];
    cin.getline(c,1000);
    reverstring(c);
}
