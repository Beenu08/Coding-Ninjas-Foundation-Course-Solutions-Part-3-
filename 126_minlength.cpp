/*
Minimum Length Word
Send Feedback
Given a string S (that can contain multiple words), you need to find the word which has 
minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word 
in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word
Constraints :
1 <= Length of String S <= 10^5
Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100]={my ,name ,is ,Beenu };
   // cin.getline(a);
    int len=a.lenght();
    int ei=0,si=0,min_start,min_len;
    while(ei<=len){
        if(ei<len && a[ei]!=' '){
            ei++;
        }
        else{
            int curr_len=ei-si;
            if(curr_len<min_len){
                min_len=curr_len;
                min_start=si;
            }
        }
        ei++;
        si=ei;
    }
    for(int i=min_start;i<=min_len;i++){
        cout<<a[i];
    }
   // cout<<c.substr(min_start, min_len);
}