// capitalize samall to capital
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string x;
//     cin >> x;
//     for (int i = 0; i < x.length(); i++)
//     {
//         if (x[i] >= 'A' && x[i] <= 'Z')
//         {
//             int a = x[i] - 'A';
//             x[i] = ('A' + 32) + a;
//         }
//         else
//         {
//             x[i] = x[i] - 32;
//         }
//     }
//     cout << x;
//     return 0;
// }
/// rotate at 90 degree
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     int x;
//     cin >> x;
//     vector<vector<int>> arr(x, vector<int>(x, 0));
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < x; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = x - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < x; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//     }
//     cout << endl;
// }
// Next Greater Element
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> nextgreaterelement(int arr[], int n)
// {
//     vector<int> result(n, -1);
//     stack<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty() && arr[i] > arr[s.top()])
//         {
//             result[s.top()] = arr[i];
//             s.pop();
//         }
//         s.push(i);
//     }
//     return result;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> result = nextgreaterelement(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// how to valid paranthesis...
//  #include <iostream>
//  #include <stack>
//  using namespace std;
//  bool isvalid(string str)
//  {
//      stack<char> st;
//      for (int i = 0; i < str.length(); i++)
//      {
//          char ch = str[i];
//          if (ch == '[' || ch == '{' || ch == '(')
//          {
//              st.push(ch);
//          }
//          else
//          {
//              if (ch == ']' && !st.empty() && st.top() == '[')
//              {
//                  st.pop();
//              }
//              else if (ch == '}' && !st.empty() && st.top() == '{')
//              {
//                  st.pop();
//              }
//              else if (ch == ')' && !st.empty() && st.top() == ')')
//              {
//                  st.pop();
//              }
//              else
//              {
//                  return false;
//              }
//          }
//      }
//      return st.empty();
//  }
//  int main()
//  {
//      string str = "([]{})";
//      cout << isvalid(str);
//      return 0;
//  }

#include <bits/stdc++.h>
using namespace std;
int nthuglynumber(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    vector<int> ans(n);
    ans[0] = 1;
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int num = min({ans[a] * 2, ans[b] * 3, ans[c] * 5});
        ans[i] = num;
        if (num == ans[a] * 2)
        {
            a++;
        }
        if (num == ans[b] * 3)
        {
            b++;
        }
        if (num == ans[c] * 5)
        {
            c++;
        }
    }
    return ans[n - 1];
}
int main()
{
    int n;
    cin >> n;
    cout << nthuglynumber(n) << endl;
    return 0;
}
