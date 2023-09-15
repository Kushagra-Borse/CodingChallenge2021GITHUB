class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count = 0, max = 0;

        for(int i = 0; i < gain.size(); i++){
            count += gain[i];
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count = 0, max = 0;

        for(int i = 0; i < gain.size(); i++){
            count += gain[i];
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};