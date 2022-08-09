class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>> ans;
        vector<int> some_path;
        
        dfs (graph, ans, some_path, 0);
        return ans;
    }
    
    void dfs( vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& some_path, int index)
    {
        some_path.emplace_back(index);
        
        if ( index == graph.size()-1)
        {
            ans.emplace_back(some_path);
        
        }
        else
        {
            for (int i = 0; i < graph[index].size(); ++i)
            {
                dfs (graph, ans, some_path, graph[index][i]);
            }
        }
        some_path.pop_back();
        
        
    }
};

