class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string si="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' '&&si!="")
            {
                a.push_back(si);
                si="";
            }
            else if(i==s.length()-1&&s[i]!=' ')
            {
                si+=s[i];
                a.push_back(si);
            }
            else if(s[i]!=' ')
            {
                si+=s[i];
            }
        }
        string result="";
        for(int i=a.size()-1;i>=0;i--)
        {
            if(i!=0)
            {
                result+=a[i]+" ";
            }
            else
            {
                result+=a[i];
            }
        }
        return result;
    }
};