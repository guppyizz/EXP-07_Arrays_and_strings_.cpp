// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 06

#include<iostream>
using namespace std;
int main(){
    int x,sum,avg;
    cout<<"Enter the size of array: ";
    cin>>x;
    int num[x];
    cout <<"Enter any "<<x<<" integer values: ";
    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    for(int j=0;j<x;j++)
    {
        sum+=num[j];   
    }
    cout<<"The sum of elements is: "<<sum;
    avg=sum/x;
    cout<<"\nThe average of elements is: "<<avg;
}
