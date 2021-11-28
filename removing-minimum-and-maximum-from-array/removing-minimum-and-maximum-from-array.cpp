class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int n=arr.size(),mn=INT_MAX,mx=INT_MIN,mx_ind,mn_ind;
        for(int i=0;i<n;i++){
            if(arr[i]>mx){
                mx=arr[i];
                mx_ind=i;
            }
            if(arr[i]<mn){
                mn=arr[i];
                mn_ind=i;
            }
        }
        
        //case both front
        
        int t1=max(mx_ind,mn_ind)+1;
        
        //both back
        int t2=n-(min(mn_ind,mx_ind));
        
        //mx fornt mn back
        int t3=mx_ind+1+(n-mn_ind);
        
        //mn front mx back
        
        int t4=mn_ind+1+(n-mx_ind);
         
        // cout<<"t1= "<<t1<<" t2="<<t2<<" t3="<<t3<<" t4="<<t4<<endl;
        
     return min({t1,t2,t3,t4});
    }    
};

