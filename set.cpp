#include <iostream>
#include <set>

using namespace std;

class test {
    public:
    int x, y;

public:
    test() : x(0), y(0) {}
    
    void def(int a, int b) {
        x = a;
        y = b;
    }
    
    // Define the less-than operator for the custom class
    bool operator<(const test& other) const {
        if (x != other.x) {
            return x < other.x;
        }
        return y < other.y;
    }
};

int main() {
    set<test> setlist;
    test T1, T2, T3, T4;
    T1.def(1, 2);
    setlist.insert(T1);
    T2.def(0, 4);
    setlist.insert(T2);
    T3.def(1, 1);
    setlist.insert(T3);
    T4.def(2, 3);
    setlist.insert(T4);

    for (auto& setElem : setlist) {
        cout << "x: " << setElem.x << ", y: " << setElem.y << endl;
    }
    
    return 0;
}
