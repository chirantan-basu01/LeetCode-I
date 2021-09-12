class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,double>mp;
        long long int result=0;
        for(int i=rectangles.size()-1;i>=0;i--){
            double ratio=double(rectangles[i][0])/double(rectangles[i][1]);
            
            if(mp.find(ratio)!=mp.end())
                result+=mp[ratio];
            mp[ratio]++;
        }
        return result;
    }
};