#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string repeatLimitedString(string s, int repeatLimit) {
            unordered_map<char, int> mp;   
            for (auto it : s) {
                mp[it]++;
            }
            
            priority_queue<pair<char, int>> pq;
            for (auto p : mp) {
                pq.push(p);
            }
            
            string result = ""; 
            while (!pq.empty()) {
                auto largest = pq.top();
                pq.pop();
                
                int len = min(repeatLimit, largest.second);
                for (int i = 0; i < len; i++) {
                    result += largest.first;
                }
    
                if (largest.second - len > 0) {
                    if (!pq.empty()) {
                        auto secondlargest = pq.top();
                        pq.pop();
                        result += secondlargest.first;
    
                        if (secondlargest.second - 1 > 0) {
                            pq.push({secondlargest.first, secondlargest.second - 1});
                        }
                    } else {
                        return result;
                    }
                    pq.push({largest.first, largest.second - len});
                }
            }
            return result;
        }
    };