// Occurance of characters
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, j, c = 0, n;
    for (j = 0; s[j]; j++)
    {
        n = j;
    }
    for (i = 0; i < n + 1; i++)
    {
        c = 1;
        if (s[i])
        {
            for (j = i + 1; j < n + 1; j++)
            {
                if (s[i] == s[j])
                {
                    c++;
                    s[j] = '\0';
                }
            }
            cout << s[i] << ":" << c << " ";
        }
    }
}
