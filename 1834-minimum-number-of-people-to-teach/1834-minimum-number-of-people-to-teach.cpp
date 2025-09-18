class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = languages.size();  
        
        // convert each user's languages to a set for fast lookup
        vector<unordered_set<int>> langs(m);
        for (int i = 0; i < m; i++) {
            for (int l : languages[i]) {
                langs[i].insert(l);
            }
        }

        // find problematic users (friendships with no common language)
        unordered_set<int> problematic;
        for (auto &f : friendships) {
            int u = f[0] - 1;  // convert to 0-index
            int v = f[1] - 1;
            bool canCommunicate = false;
            for (int l : langs[u]) {
                if (langs[v].count(l)) {
                    canCommunicate = true;
                    break;
                }
            }
            if (!canCommunicate) {
                problematic.insert(u);
                problematic.insert(v);
            }
        }

        if (problematic.empty()) return 0;

        // Try each language, count how many problematic users already know it
        int maxKnown = 0;
        for (int l = 1; l <= n; l++) {
            int count = 0;
            for (int u : problematic) {
                if (langs[u].count(l)) {
                    count++;
                }
            }
            maxKnown = max(maxKnown, count);
        }

        return (int)problematic.size() - maxKnown;
    }
};

