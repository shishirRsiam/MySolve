#define vec vector<int> 
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        vec freq(26);
        for(char &c:tasks) freq[c-'A']++;

        priority_queue<int>pq;
        for(int &v:freq) 
            if(v>0) pq.push(v);
        
        int ans = 0;
        while(!pq.empty())
        {
            vec a;
            for(int i=0;i<=n;i++)
            {
                if(!pq.empty())
                {
                    int cnt = pq.top(); pq.pop();
                    cnt--;
                    a.push_back(cnt);
                }
            }
            for(int &v:a) if(v>0) pq.push(v);
            if(pq.empty()) ans += a.size();
            else ans += n+1;
        }
        return ans;
    }
};
