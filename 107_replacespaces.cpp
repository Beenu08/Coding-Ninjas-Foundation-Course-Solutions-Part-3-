/*
You have been given a string 'STR' of words. You need to replace all the spaces 
between words with “@40”.
Input Format:
The first line contains a single integer ‘T’ representing the number of test cases. 

The first line of each test case will contain a single string 'STR' consisting of one 
or more words. 
Output Format:
For each test case, return the modified string after replacing all the spaces between 
words with “@40”.

Print the output of each test case in a separate line.
Note:
You don’t need to print anything, It has already been taken care of. Just implement the 
given function.
Constraints:
1 <= T <= 50
0 <= |STR| <= 100

Where ‘|STR|’ is the length of a particular string including spaces.

Time limit: 1 sec
Sample Input 1:
2
Coding Ninjas Is A Coding Platform
Hello World
Sample Output 1:
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World
Explanation Of Sample Output 1:
In test case 1, After replacing the spaces with “@40” string is: 

Coding@40Ninjas@40Is@40A@40Coding@40Platform

In test case 2, After replacing the spaces with “@40” string is: 

Hello@40World
Sample Input 2:
3
Hello
I love coding
Coding Ninjas India
Sample Output 2:
Hello
I@40love@40coding
Coding@40Ninjas@40India    
Explanation For Sample Output 2:
In test case 1, After replacing the spaces with “@40” string is: 

Hello

In test case 2, After replacing the spaces with “@40” string is: 

I@40love@40coding

In test case 3, After replacing the spaces with “@40” string is: 

Coding@40Ninjas@40India
*/
#include<iostream>
using namespace std;
void replace(char c[]){
   string ans="";
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==' '){
        ans+="@40";
        }
        else{
            ans+=c[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    char c[100];
    cout<<"Enter string:";
    cin.getline(c,100);
    replace(c);
}












