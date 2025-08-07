// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 07

#include <iostream>
using namespace std;

int main(){
   string str;
   int n,x=0;
   cout<<"Enter a String: ";
   cin>>str;
   n=str.length();
   for(int i=0;i<n;i++)
   {
       if(str[i]==str[n-1-i])
       {
       x=x+1;
       }
   }
   if (x==n){
     cout<<"It is a palindrome";
   }
   else
   {
     cout<<"It is not a palindrome";
   }
}
