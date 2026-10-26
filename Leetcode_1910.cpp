class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)>=0 && s.find(part)<s.length()){
             int i = s.find(part);
             s.erase(i, part.length());
        }
       return s;
    }
};
