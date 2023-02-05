#include <vector>

class DoubleLinear
{
public:
    static int dblLinear(int n)
    {
        std::vector<int> arr(n + 1);
        arr[0] = 1;
        int i = 0, j = 0;
        for (int k = 1; k <= n; ++k)
        {
            int x = arr[i] * 2 + 1, y = arr[j] * 3 + 1;
            if (x < y)
            {
                arr[k] = x;
                ++i;
            }
            else if (x > y)
            {
                arr[k] = y;
                ++j;
            }
            else
            {
                arr[k] = x;
                ++i;
                ++j;
            }
        }
        return arr[n];
    }
};
