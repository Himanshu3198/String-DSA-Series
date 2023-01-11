class Solution
{
    public:
        bool isItPossible(string word1, string word2)
        {

            unordered_map<char, int> mp1, mp2;

            for (auto w1: word1) mp1[w1]++;
            for (auto w2: word2) mp2[w2]++;
            set<char> st1, st2;
            for (auto w1: word1) st1.insert(w1);
            for (auto w2: word2) st2.insert(w2);

            for (auto w1: st1)
            {
                for (auto w2: st2)
                {
                    char first = w1, second = w2;
                    mp1[second]++;
                    mp2[first]++;
                    if (mp1[first] == 1) mp1.erase(first);
                    if (mp2[second] == 1) mp2.erase(second);
                    if (mp1.size() == mp2.size()) return true;
                    if (!mp1.count(first)) mp1[first]++;
                    if (!mp2.count(second)) mp2[second]++;
                    mp1[second]--;
                    mp2[first]--;
                    if (mp1[second] <= 0) mp1.erase(second);
                    if (mp2[first] <= 0) mp2.erase(first);
                }
            }
            return false;
        }
};
