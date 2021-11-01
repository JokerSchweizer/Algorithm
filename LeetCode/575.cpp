///////这是自己的第一个版本
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
         map<int, int> mp;
        for (auto it = candyType.begin(); it != candyType.end(); it++)
        {
            mp[*it]++;
            if(mp.size()>(candyType.size()/2))
                 return(candyType.size() / 2);
        }

         return mp.size();
    }
};
//////这是别人用bitset写的，漂亮多了。
class Solution {
public:
    int distributeCandies(vector<int> &candyType) {
        bitset<200005> s;
        for(int x: candyType) if(!s[x+100000]) s.set(x+100000);
        return min(candyType.size() / 2, s.count());
    }
};
