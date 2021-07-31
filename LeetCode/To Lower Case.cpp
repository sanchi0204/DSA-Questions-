class Solution {
public:
    string toLowerCase(string str) {

        string ans;

        for(int i=0;i<str.length();i++)
            ans+=tolower(str[i]);

    return ans;
    }
};
