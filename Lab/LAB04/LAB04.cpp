
#include <iostream>

    using namespace std;

    int main()
    {
        int i = 0;
        {
            cout << "1. For Loop:" << endl;
            for (int i = 1; i < 11; i++)
            {
                cout << i << endl;
            }

            i = 0;

            cout << "2. While Loop:" << endl;
            while (i < 10)
            {
                i++;
                cout << i << endl;
            }

            i = 0;

            cout << "3. Do-While Loop:" << endl;
            do
            {
                i++;
                cout << i << endl;
            } while (i < 10);

            return 1;
        }

    }