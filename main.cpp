#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> main()
{

    vector<int> nums1;
    vector<int> nums2;
    vector<int> nums3;

    vector<int> common;

    for (int i = 0; i <= nums1.size(); i++)
    {
        nums1.push_back(i);
    }
    for (int j = 0; j <= nums1.size(); j++)
    {
        nums2.push_back(j);
    }
    for (int k = 0; k <= nums1.size(); k++)
    {
        nums3.push_back(k);
    }

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            for (int k = 0; k < nums3.size(); k++)
            {

                if (nums1[i] == nums2[j])
                    common.push_back(nums1[i]);
                if (nums2[j] == nums3[k])
                    common.push_back(nums2[j]);
                if (nums1[i] == nums3[k])
                    common.push_back(nums1[i]);
                if (nums1[i] == nums2[j] == nums3[k])
                    common.push_back(nums1[k]);
            }
        }
    }
        // sort(common.begin(), common.end());
        // int iter = unique(common.begin(), common.end());

        // erase(iter, common.end());

        // for (const auto &s : common)
        // {
        //     std::cout << s << " ";
        // }
        // std::cout << std::endl;
    sort( common.begin(), common.end() );
    common.erase( unique( common.begin(), common.end() ), common.end() );

    return common;
}
