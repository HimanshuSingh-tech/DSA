class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v1(26);
        for(char x : text){
            v1[x - 'a']++;
        }
        int cnt =0 ;
        while(v1[1] >= 1 && v1[0] >= 1 && v1[11] >= 2 && v1[14]>=2 && v1[13] >= 1){
            v1[0]  = v1[1] - 1;
            v1[1]  = v1[1] - 1;
            v1[11] = v1[11] -2;
            v1[13] = v1[13] -1;
            v1[14] = v1[14] -2;
            cnt++;
        }
        return cnt;
    }
};