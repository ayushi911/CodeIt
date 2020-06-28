/*
332. Reconstruct Itinerary

Given a list of airline tickets represented by pairs of departure and arrival airports [from, to], reconstruct the itinerary in order.
All of the tickets belong to a man who departs from JFK. Thus, the itinerary must begin with JFK.

Note:

If there are multiple valid itineraries, you should return the itinerary that has the smallest lexical order when read as a single string.
For example, the itinerary ["JFK", "LGA"] has a smaller lexical order than ["JFK", "LGB"].

All airports are represented by three capital letters (IATA code).
You may assume all tickets form at least one valid itinerary.
One must use all the tickets once and only once.

Example 1:

Input: [["MUC", "LHR"], ["JFK", "MUC"], ["SFO", "SJC"], ["LHR", "SFO"]]
Output: ["JFK", "MUC", "LHR", "SFO", "SJC"]

Example 2:

Input: [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]
Output: ["JFK","ATL","JFK","SFO","ATL","SFO"]
Explanation: Another possible reconstruction is ["JFK","SFO","ATL","JFK","ATL","SFO"].
             But it is larger in lexical order.
             
---------------SOLUTION-----------------
The problem is an example of euler path finding since we need to traverse each edge exactly once in the graph created lexicographically and 
since it is always guaranteed that a solution exists then Hierholzer's algorithm will work.

The time complexity here is O(E logE) since we require sorting the lists. A better approach would be to use heaps instead of lists and even then 
pushing each element one by one would require O(E logE) thus Instead we can create a heap for the individual lists using make_heap (STL) function 
which should reduce the time complexity to O(E). Space complexity is O(V+E)
E is the no. of flights
V is no. of routes*/

class Solution {
public:
    void dfs(string src, unordered_map<string, vector<string>>& m, vector<string>& ans){
        while(!m[src].empty()){
            string s=m[src].back();
            m[src].pop_back();
            dfs(s,m,ans);
        }
        ans.push_back(src);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        //create a graph
        unordered_map<string, vector<string>> m;
        for(auto i:tickets)
            m[i[0]].push_back(i[1]);
        for(auto &i:m)
            // Sorting in descending order since we will be popping elements from the end
            sort(i.second.begin(), i.second.end(),greater<string>());
        vector<string> ans;
        dfs("JFK",m,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
             

             
