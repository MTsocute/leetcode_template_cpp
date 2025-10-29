//
// Created by shuhe on 2025/10/27.
//

#ifndef LEETCODE_MIAN_H
#define LEETCODE_MIAN_H

#include <iostream>
#include <fmt/core.h>
#include <queue>
#include <ranges>
#include <set>
#include <unordered_map>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif  // LEETCODE_MIAN_H
