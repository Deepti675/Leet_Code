class Solution {
public:
    vector<vector<int>> g;
    vector<int> values;

    int64_t ans = 0;
    vector<int> sz;

    void dfs_pre(int v, int p) {
        for (auto& to : g[v]) {
            if (to == p) {
                continue;
            }
            dfs_pre(to, v);
            sz[v] += sz[to];
        }
        ++sz[v];
    }

    void dfs(int v, int p, map<int, int>& q) {
        int big = -1, mx = 0;
        for (auto& to : g[v]) {
            if (to == p) {
                continue;
            }
            if (sz[to] > mx) {
                mx = sz[to];
                big = to;
            }
        }
        if (big != -1) {
            dfs(big, v, q);
            while (!q.empty() && values[v] > q.begin()->first) {
                q.erase(q.begin());
            }
        }
        for (auto& to : g[v]) {
            if (to == p || to == big) {
                continue;
            }
            map<int, int> child;
            dfs(to, v, child);
            while (!child.empty() && values[v] > child.begin()->first) {
                child.erase(child.begin());
            }
            for (auto& [x, y] : child) {
                ans += y * q[x];
                q[x] += y;
            }
        }
        ans += ++q[values[v]];
    }

    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        values = vals;
        int n = vals.size();
        sz.resize(n);
        g.resize(n);
        for (auto& e : edges) {
            auto [from, to] = tie(e[0], e[1]);
            g[from].push_back(to);
            g[to].push_back(from);
        }
        map<int, int> q;
        dfs_pre(0, -1);
        dfs(0, -1, q);
        return ans;
    }
};
