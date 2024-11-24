//link of problem : https://edabit.com/challenge/uBHnu5rBpET5wEQuc
#include <iostream>
using namespace std;
int* arrEleSum(int arr[], int size){    
    int* R = new int[size];
    int sum = 0;
    for(int i = 0; i < 6; i++){
        int flag = i;
        for(int i = 0; i < 6; i++){
            if(flag != i)
            sum+=arr[i];
        }
        R[i] = sum;
        sum = 0;
    }
    return R;
}
int main(){
    int T[]{10, 20, 30, 40, 50, 60};
    int size = sizeof T / sizeof T[0];
    int* R = arrEleSum(T, size);
    for(int i = 0; i < 6; i++){
            cout << R[i] << " ";
        }
   return 0;
}
