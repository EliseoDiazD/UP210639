
#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> v = { 3, 5, 2, 4, 7 };
 
    std::sort(v.begin(), v.end());
 
    for (const auto &i: v) {
        std::cout << i << ' ';
    }
 
    return 0;
}