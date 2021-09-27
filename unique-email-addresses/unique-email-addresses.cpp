class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>set;
        
        for(auto email:emails){
            string cleanEmail;
            for(auto c:email){
                if(c=='+' || c=='@')
                    break;
                else if(c=='.')
                    continue;
                cleanEmail+=c;
            }
            cleanEmail+=email.substr(email.find('@'));
            set.insert(cleanEmail);
        }
        return set.size();
    }
};