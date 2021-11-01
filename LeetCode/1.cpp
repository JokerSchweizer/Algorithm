class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return { it->second, i };
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         multimap<int,int> st;
        vector<int> result;
        for (size_t i = 0; i < nums.size(); i++)
        {
            st.insert({ nums[i],i });
        }
        for (auto it = st.rbegin(); it != st.rend(); ++it)
        {
            auto search = st.find(target - it->first);
            if (search !=st.end())
            {
                result.push_back(search->second);
                result.push_back(it->second);

                break;
            }
        }

        return result;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;//提供一对一的hash
        for(int i=0;i<nums.size();i++)
        {
            if(a.count(target-nums[i])>0)
            {

                return {a[target-nums[i]],i};
                break;
            }
            a[nums[i]]=i;//反过来放入map中，用来获取结果下标
        }
      return {};
    }
};
