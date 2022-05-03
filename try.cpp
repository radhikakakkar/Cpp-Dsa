#include <iostream>
using namespace std;

class Solution
{
public:
    void intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int input;
        while (cin >> input)
            nums1.push_back(input);
        // for (int i = 0; i < nums1.size(); i++)
        // {
        //     cout << nums1[i] << " ";
        // }
        while (cin >> input)
            nums2.push_back(input);
        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     cout << nums2[i] << " ";
        // }

        // return 0;
    }
};
