/*
You are given three inputs: a string, one letter, and a second letter.

Write a function that returns true if every instance of the first letter occurs before every instance of the second letter.#include <iostream>
*/
#include <iostream>
using namespace std;

bool firstBeforeSecond(string s, char c1, char c2){
    int index1, index2;
    for(int i = 0; i < size(s); i++){
        if(s[i] == c1)
            index1 = i;
    }
    
    for(int i = 0; i < size(s); i++){
        if(s[i] == c2){
            index2 = i;
            break;
        }
    }
    if(index1 < index2)
        return true;
    return false;
}

int main()
{
     cout << firstBeforeSecond("a rabbit jumps joyfully", 'a', 'j');

   return 0;
}
