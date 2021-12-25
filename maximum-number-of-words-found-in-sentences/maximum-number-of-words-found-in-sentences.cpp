class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1=0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            max1=max(max1, count);
            
        }
        return max1;
    }
};