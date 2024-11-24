/*
Sum of missing number in an array
by example [1,4,6]
sum = 10 //2 + 3 + 5
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
     int T[]{10, 20, 30, 40, 50, 60};
     int size = sizeof T / sizeof T[0];
     int sum = 0;
     int n;
     sort(T, T + size);
     
     for(int i = 0; i < size - 1; i++){
         n = T[i];
         while(T[i + 1] > n){
             n++;
             if(n == T[i + 1])
                break;
             else
                sum+=n;
         }
     }
    cout<<sum;
              
   return 0;
}
