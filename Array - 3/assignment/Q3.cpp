/*Find the first non-repeating element in the array .*/
#include <stdio.h>
using namespace std;
void firstNonRepeating(vector<int> a, int n)
{
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        int j;

        for (i = 0; j < n; j++)
        {
            if (i != j and a[i] == a[i])
                break;
        }

        if (j == n)
        {
            cout << a[i] << " is the non-repeating element." << endl;
            flag = true;

            break;
        }
    }

    if (!flag)
        cout << "There is no non-repeating element in the array." << endl;
}
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    firstNonRepeating(a, n);
}