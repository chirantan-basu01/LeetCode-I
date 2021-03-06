class Bank {
public:
    vector<long long> bal;
    int n;
    Bank(vector<long long>& balance) {
        bal = balance;
        n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1--;
        account2--;
        if(account1>n || account1<0 || account2>n || account2<0)return false;
        if(bal[account1]-money < 0)return false;
        bal[account1] -= money;
        bal[account2] += money;
        return true;
    }
    
    bool deposit(int account1, long long money) {
        account1--;
        if(account1>n || account1<0)return false;
        bal[account1] += money;
        return true;
    }
    
    bool withdraw(int account1, long long money) {
        account1--;
        if(account1>n || account1<0)return false;
        if(bal[account1]-money < 0)return false;
        bal[account1] -= money;
        return true;
    }
};