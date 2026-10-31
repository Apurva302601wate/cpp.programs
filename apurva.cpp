#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "hello,world!" << endl;

    #ifdef _WIN32
    system("pause");
    #endif

    return 0;
}
