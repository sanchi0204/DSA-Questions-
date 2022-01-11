#include <bits/stdc++.h>

using namespace std;

/*
Suppose we have some input data describing a graph of relationships between parents and children over multiple generations. The data is formatted as a list of (parent, child) pairs, where each individual is assigned a unique positive integer identifier.

For example, in this diagram, 3 is a child of 1 and 2, and 5 is a child of 4:

1   2    4   15
 \ /   / | \ /
  3   5  8  9
   \ / \     \
    6   7    11


Sample input/output (pseudodata):

parent_child_pairs = [
    (1, 3), (2, 3), (3, 6), (5, 6), (15, 9),
    (5, 7), (4, 5), (4, 8), (4, 9), (9, 11)
]

Write a function that takes this data as input and returns two collections: one containing all individuals with zero known parents, and one containing all individuals with exactly one known parent.


Output may be in any order:

find_nodes_with_zero_and_one_parents(parent_child_pairs) => [
  [1, 2, 4, 15],       # Individuals with zero parents
  [5, 7, 8, 11]        # Individuals with exactly one parent
]

Complexity Analysis variables:

n: number of pairs in the input

*/
vector<vector<int>> FindNumParent(vector<pair<int,int>>& nums)
{
    unordered_set<int> s;
  int mn = INT_MIN;

   for(int i=0;i<nums.size();i++)
  {
    s.insert(nums[i].first);
     s.insert(nums[i].second);

     mn=max(mn, max(nums[i].first, nums[i].second));

  }

  int n=mn;

  //vector<int> ad[];
  vector<int> indegree(n+1,0);
  vector<vector<int>> res;

  vector<int> zero;
  vector<int> one;


//   for(auto i: nums)
//   {
//     ad[i.first].push_back(i.second);
//   }

  for(int i=0;i<nums.size();i++)
  {
    //cout<<nums[i].second<<endl;
    indegree[nums[i].second]++;
  }

 // cout<<"Done loop1 ";

  for(int i=0;i<indegree.size();i++)
  {
    if(indegree[i]==0 && s.find(i)!=s.end())
    {
      zero.push_back(i);
    }

    if(indegree[i]==1 && s.find(i)!=s.end())
      one.push_back(i);
  }

  res.push_back(zero);
  res.push_back(one);

 // cout<<"Function executed";
  return res;

}

int main() {
  vector<pair<int, int>> parent_child_pairs = {
    make_pair(1, 3),
    make_pair(2, 3),
    make_pair(3, 6),
    make_pair(5, 6),
    make_pair(15, 9),
    make_pair(5, 7),
    make_pair(4, 5),
    make_pair(4, 8),
    make_pair(4, 9),
    make_pair(9, 11)
  };

  vector<int> zeroParent;
  vector<int> oneParent;

  vector<vector<int>> ans = FindNumParent(parent_child_pairs);

  for(auto x:ans)
  {
    for(auto y: x)
        cout<< y<<" ";

    cout<<endl;
  }


  return 0;
}
