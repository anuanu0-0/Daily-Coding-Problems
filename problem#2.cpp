// PROBLEM : DAY 2

// COMMON APPROACH
// Store the product of all the variables in a temp variable and for each ith index
// divide total product with value at that index.

// EFFICIENT SOLUTIONS
// There can be many possible solutions for this problem :
// IDEA 1:
//   Make an temp array of same size n. Loop from i=0 to n-1 and store product values till i-1 for
//   every ith value in temp[i]. Similarly, do it i=n-1 to i=0. This will make the temp array contain
//   product of all the elements except the element present at ith location.
// IDEA 2:
//   Clever solution- Just in place of division operator use pow(a[i], -1) in commonly used approach.
// IDEA 3:
//   Make use of log property. As with log every multiplication becomes addition operation and every
//   division operation becomes subtraction opertaion.

// IMPLEMENTATION OF IDEA 1
#include <bits/stdc++.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
using namespace std;

void solve(vector<int> v)
{
    int n = v.size();
    vector<int> pro(n, 1);
    int t = 1;

    for (int i = 0; i < n; i++)
    {
        pro[i] = t;
        t = t * v[i];
    }

    t = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        pro[i] = pro[i] * t;
        t = t * v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pro[i] << " ";
    }
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    solve(v);

    return 0;
}

// Have a look.
// REFERENCE :IDEA 2 & IDEA 3 - GeeksforGeeks
//Link: https://www.geeksforgeeks.org/product-array-puzzle-set-2-o1-space/