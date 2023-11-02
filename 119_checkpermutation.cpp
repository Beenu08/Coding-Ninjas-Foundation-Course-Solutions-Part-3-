/*
Check Permutation
Send Feedback
For a given two strings, 'str1' and 'str2', check whether they are a permutation of 
each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's 
characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we 
can say that the given strings are a permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, 
representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, 
representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two 
strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just 
implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c[100],d[100];
    cin>>c>>d;
    if(strlen(c)!=strlen(d)){
        cout<<"false"<<endl;
        return 0;
    }
    int a=0;
    for(int i=0;i<strlen(c);i++){
        for(int j=0;j<strlen(d);j++){
            if(c[i]==d[j]){
                a++;
                break;
            }
        }
    }
        if(a==strlen(c)){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
}