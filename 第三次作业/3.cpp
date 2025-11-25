#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        if(i % 2 != 0)
        {
            cout << " ";
        }
        for(int j = 0; j < N; j++)
        {
            cout << "*";
            if(j < N)
            {
                cout << " ";
            }
        }
        if(i % 2 == 0)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}