//Inbuuilt functions
/*
1. strlen(string_name)---- used to find length of string
2. strcmp(string_name1, string_name2)----used to comapre two strings
wheather thay are equal or not
if it return zero means both strings are equal 
else if it return any integer mmeans they are
unequal
3. strcpy(string in which u want to coppy, string which you want ot coppy)
--- it is used to copy string
u may also write strcpy(c,"Hello") 
4. strncpy(destination_String,source_string,n)
used to copy n characters from source to destinaion)
it does not null by itself
5. 
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c[100],d[100];
    cin>>c>>d;
    // int l = strlen(c);
    // cout<<"Length is:"<<l<<endl;
    // if(strcmp(c,d)==0){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
  //  cout<<strcmp(c,d)<<endl;
  //  cout<<strcpy(c,d)<<endl;
  cout<<strncpy(c,d,4);
  //d has not 4 charctres then it append null character in remaining places
  
}
