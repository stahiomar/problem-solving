//problem link : https://edabit.com/challenge/wgnmQTbfssuhvZHqe

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> m;
    int T[]{1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5};
    int size = sizeof T / sizeof T[0];
    
    for(int i = 0; i < size; i++){
        m[T[i]]++;       
    }
    
    for(auto mapElem : m){
        if(mapElem.second % 2 != 0)
        cout << mapElem.first<<endl;
    }

   return 0;
}
