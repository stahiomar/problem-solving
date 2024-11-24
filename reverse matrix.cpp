/* Online C++ Compiler and Editor */
#include <iostream>

using namespace std;

int main()
{
    int T[2][4]{8,1,3,7,6,5,4,6};
    int R[4][2];
    


    int rows = sizeof T / sizeof T[0]; // 2 rows  
    int cols = sizeof T[0] / sizeof(int); // 5 cols
    
    
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            R[j][i] = T[i][j];
        }
        cout<<endl;
    }
    
    
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
   return 0;
}