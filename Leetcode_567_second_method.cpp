class Solution {
public:
bool isfreqsame(int freq1[], int freq2[]){
    for(int i = 0; i<26; i++){
        if(freq1[i] != freq2[i]){
             return false;
        }
    }
    return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){return false;}
        int freq[26] = {0};
        for(int i = 0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        //what if introduce second freqtable here
        for(int i = 0; i<s2.length(); i++){
            int windfreq[26] = {0};
            int windidx = 0, idx = i;
            while(windidx<s1.length() && idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                windidx++;
                idx++;
            }
            if(isfreqsame(freq, windfreq)){
                return true;
            }
        }
        return false;
    }
};
