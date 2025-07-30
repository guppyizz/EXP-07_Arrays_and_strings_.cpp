#include<iostream>
using namespace std;
int main() {
   cout << "enter the size of array : ";
   int n;
   cin >>n;
   int numbers[n];
   for (int i=0 ;i<n ; i++){
       cout << "enter the values "<< endl;
       cin >> numbers[i];
   }
   cout << "the reversed array is : ";
   for(int j=n-1 ; j>=0 ; j--){
       cout << numbers[j] << endl;
   }
}
