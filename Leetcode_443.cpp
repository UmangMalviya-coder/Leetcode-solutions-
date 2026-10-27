class Solution {
public:
    int compress(vector<char>& s) {
        int i = 0;
        int n = s.size();
        int freqidx = 0;
        while(i<n){
            char wind = s[i];

            int freq = 0;
            while(i<n && s[i] == wind){
                i++;
                freq++;
            }
            s[freqidx++] = wind;
            if(freq != 1){
            //s.erase(freqidx, freq-1);
            string str = to_string(freq);
            for( char dig : str){
            s[freqidx++] = dig;
            }
            }
            /* if(freq == 1){
            //s.erase(freqidx, freq-1);
            string str = to_string(freq);
            for( char dig : str){
            s[freqidx++] = dig;
            }
            }*/
            

        }
        s.resize(freqidx);
        return freqidx;
    }
};
