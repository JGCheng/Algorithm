// the count which indclude 1 from 1 to n
#include <iostream>

using namespace std;

int countof1(unsigned int n)
{
    if ( n<=1 ) return 1;

    int count = 0;
    for (int i =1; i<=n; i++)
    {
        int val = i;
        do {
            if ((val & 0x000000FF)==1) {
                cout << i << endl;
                count ++;
                break;
            }
                
            val = val >> 8;
        }while(val!=0);
    }
    return count;
}

int main()
{
    cout << " Number of 1: " << countof1(12) << endl;
}
