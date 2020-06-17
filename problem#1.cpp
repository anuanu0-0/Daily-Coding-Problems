/*
    This problem was recently asked by Google.
    PROBLEM STATEMENT: Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
    Bonus: Can you do this in one pass?
*/

//Time Complexity: 0(n)
//Space Complexity: 0(n)

//Corner Case: eg-
// *  For v{3,3} and k = 6
// *  For v{3, 2, 4} and k = 6 , O/p must be {2, 4} and not {3,3}
//Refer end.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);

using namespace std;

bool check(vector<int> v, int k)
{
    unordered_set<int> us;
    for (int i = 0; i < v.size(); i++)
    {
        us.insert(v[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (us.find(k - v[i]) == us.end())
            return true;
    }

    return false;
}

int main()
{
    vector<int> v{2, 15, 3, 7};
    int k = 4;

    if (check(v, k))
        cout << "Found" << '\n';
    else
        cout << "Found" << '\n';

    return 0;
}

//    MODIFIED FOR CORNER CASES:
//        Returns indices i & j.

/*
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> um;
        int s1, s2;

        for (int i = 0; i < nums.size(); i++)
        {
            int numToFind = target - nums[i];

            if (um.find(numToFind) != um.end())
            {
                s1 = um[numToFind];
                s2 = i;
                return {s1, s2};
            }
            um[nums[i]] = i;
        }

        return {-1, -1};
    }


*/