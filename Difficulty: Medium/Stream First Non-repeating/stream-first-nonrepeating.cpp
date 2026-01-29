class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        int char_freq[26] = {0};
        queue<char> q;
        string ss = "";
    
        for (int i = 0; i < s.size(); i++) {
            char_freq[s[i] - 'a']++;
            q.push(s[i]);
    
            while (!q.empty() && char_freq[q.front() - 'a'] > 1) {
                q.pop();
            }
    
            if (!q.empty())
                ss.push_back(q.front());
            else
                ss.push_back('#');
        }
    
        return ss;

    }
};