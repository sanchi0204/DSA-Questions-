class Solution {
public:
    char findTheDifference(string s, string t) {

        char res1,res2;


        for(int i=0;i<s.length();i++)
            res1=res1^s[i];

        for(int i=0;i<t.length();i++)
            res2=res2^t[i];


        return res1^res2;
    }
};
