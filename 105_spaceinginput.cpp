/* 
If you want to cout line 
My name is Beenu
than it is not possible with cin ,therfore we use cin.getline()
cin.getline(arrayname, arraysize, delimeter)
arrayname - taken by user
arraysize- define by user
delimeter - default value is \n
to change pass it explicitily as it stop if it meets passed delimeter.
*/
#include<iostream>
using namespace std;
int main(){
    char c[100];
    cout<<"enter string:";
    cin.getline(c,100,'i');
    cout<<c<<endl;
}