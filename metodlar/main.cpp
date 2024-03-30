#include <iostream>

using namespace std;
int main()
{
    for(int i = 0; i < 1000; i++)
    {

        int a;
        cout << "son kiriting: \n";
        cin >> a;
        if(a % 2 == 0)
        {
            cout << "juft son\n";
        }
        else
        {
            cout << "toq son\n";
        }
    }
    return 0;
}
