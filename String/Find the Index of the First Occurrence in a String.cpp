class Solution {
public:
    int strStr(string haystack, string needle) {
        int p=-1;
        for(int i=0;i<haystack.length();i++)
        {
            int k=0;
            int h=i;
            for(int j=0;j<needle.length();j++)
            {
                if(haystack[i]==needle[j])
                {
                    k++;
                    i++;
                }
            }
            i=h;
            if(k==needle.length())
            {
                p=i;
                break;   
            }
        }
        return p;
    }
};