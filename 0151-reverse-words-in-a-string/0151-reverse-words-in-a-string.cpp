class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        string temp;
        int i = 0;
        while(i<n) {
            while(i<n && s[i]==' ') i++; 
            if(i>=n) break;
            int j=i;
            while(j<n && s[j]!=' ') j++;
            string word =s.substr(i,j-i);
            if(!temp.empty()) temp = word+" "+temp;
            else temp =word;
            i=j;
        }
        return temp;
    }
};
