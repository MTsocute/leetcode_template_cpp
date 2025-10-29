#include "main.h"
#include <algorithm>
#include <stack>
#include <unordered_set>

class Solution
{
public:
    int T;
    size_t n;
    vector<int> solution;
    vector<vector<int>> solutions;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        T = target;
        n = candidates.size();
        std::ranges::sort(candidates);
        dfs(0, 0, candidates);
        return solutions;
    }

    void dfs(size_t depth, int accum, vector<int>& candidates)
    {
        if (accum == T)
        {
            solutions.emplace_back(solution);
            return;
        }

        for (size_t i = depth; i < n; ++i)
        {
            int val = candidates[i];
            int cur_val = accum + val;

            if (cur_val > T) break;  // 剪枝，后面都不可能了
            solution.emplace_back(val);

            dfs(i, cur_val, candidates);
            solution.pop_back();
        }
    }
};

int main()
{
    Solution sol;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    auto result = sol.combinationSum(candidates, target);
    for (const auto& comb : result)
    {
        for (int num : comb) { std::cout << num << " "; }
        std::cout << std::endl;
    }
    return 0;
}
