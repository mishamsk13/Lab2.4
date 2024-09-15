#include <iostream>
#include "myF.h"

namespace MyNamespace {
    int myFunction(int num) {
        static int staticVar = 0;
        using namespace std;
        cout << "Sum: " << staticVar + num << endl;
        staticVar = num;
        return 0;
    }
}
