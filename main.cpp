#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cin>>seconds;
    seconds++;
    while(1 <= seconds){
        seconds--;
        cout << seconds << endl;
    }

    return 0;
}