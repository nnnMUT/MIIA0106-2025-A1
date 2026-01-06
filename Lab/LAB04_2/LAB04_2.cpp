
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    {
        cout << "Even number from 2 to 99" << endl;
        for (i = 3; i < 100; i++)
        {
            if (i % 3 == 0)
                cout << i << endl;
            continue;
        }
        return 1;
    }
}
?????0???100??????3?????