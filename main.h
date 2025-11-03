//
// Created by shuhe on 2025/10/27.
//

#ifndef LEETCODE_MIAN_H
#define LEETCODE_MIAN_H

#include <algorithm>
#include <fmt/core.h>
#include <iostream>
#include <queue>
#include <ranges>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

#endif  // LEETCODE_MIAN_H
