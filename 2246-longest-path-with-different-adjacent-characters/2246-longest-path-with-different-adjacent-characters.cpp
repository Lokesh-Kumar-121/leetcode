
        
        class Solution {
public:
    int longestPath(vector<int>& parent, string s) {        
        int n = parent.size();

        // Sort vertices so that a parent will always be before it's children
        
        vector<bool> done(n, false); done[0] = true;
        vector<int> order(n); order[0] = 0;

        int front_counter = 1, back_counter = n;
        for (int i = 1; i < n; ++i) {
            for (int k = i; not done[k]; k = parent[k]) {
                order[--back_counter] = k;
                done[k] = true;
            }
            while (back_counter < n) {
                order[front_counter++] = order[back_counter++];
            }
        }

        // Go through vertices starting from children
        // Remember longest and second longest way from leaf to vertex
        
        vector<int> max_to(n, 1), second_to(n, 1);
        int result = 1;
        for (auto i = n-1; i > 0; --i) {
            int k = order[i];
            int p = parent[k];
            if (s[k] != s[p]) {
                if (max_to[p] <= max_to[k]) {
                    second_to[p] = max_to[p];
                    max_to[p] = max_to[k] + 1;
                }
                else if (second_to[p] <= max_to[k]) {
                    second_to[p] = max_to[k] + 1;
                }
                result = max(result, max_to[p] + second_to[p] - 1);
            }
        }

        return result;
    }


        
    
};