// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 07


#include<iostream>
using namespace std;
int main(){
    int num[10]={30,40,50,60};
    int key;
    cout<<"Enter the value to search in the array: ";
    cin>>key;
    for(int j=0;j<5;j++)
    {
        if(key==num[j])
        {
        cout<<"Key found at Location:"<<j;
        }
        break;
        
        
    }
}
