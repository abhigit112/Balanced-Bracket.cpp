#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[100][100];
    vector<int> rowflag(a, false);
    vector<int> colflag(b, false);

    // Input array and mark rows and columns that contain 0
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                rowflag[i] = true;
                colflag[j] = true;
            }
        }
    }

    // Update rows based on the rowflag
    for (int i = 0; i < a; i++)
    {
        if (rowflag[i])
        {
            for (int j = 0; j < b; j++)
            {
                arr[i][j] = 1;
            }
        }
    }
    // Output the modified array
    for (int j = 0; j < b; j++)
    {
        if (colflag[j])
        {
            for (int i = 0; i < b; i++)
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
