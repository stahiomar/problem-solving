#include <iostream>
#include <algorithm>
using namespace std;
int main(){
     int arr1[]{1,4,6,8};
     int arr2[]{2,3,7,9};
     int arr3[]{0,0,0,0,0,0,0,0};
     int i, j, k;
     i=j=k=0;
     
     while(i <= 4 || j <= 4){
         if(arr1[i] < arr2[j]){
             arr3[k] = arr1[i];
             i++;
             k++;
         }
         else{
             arr3[k] = arr2[i];
             j++;
             k++;
         }
     }
     
     for(i = 0; i < 8; i++)
        cout << arr3[i];
        
   return 0;
}
