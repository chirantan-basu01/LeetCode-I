class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int tf) {
        vector<int> t = times[tf]; // Store the target friend because after sorting indexes will shuffle
        sort(times.begin(), times.end()); // sort the elements
        //Intuition behind sorting is that we book first chairs for people coming first in on time.         
        int n = times.size();
        vector<int> emptyChair(n); // this array will keep track of time when particular chair will get empty 
        //i.e. indexes of this array represents chair number and values represents leaving time 
        //and there can only be n(number of friends attending) chairs in use at a time.
        
        for ( vector <int> x : times ){ // now iterate over given time intervals
                for (int i = 0 ; i< n ;i++  ){ // iterating over all the chairs 
                    if (emptyChair[i] <= x[0] ){
                        //if current time greater than leaving time of person sitting on the chair 
                        //then this chair must be empty now 
                        emptyChair[i] =  x[1]; // so now we will keep track of when current person will leave this chair
                        if (x == t ) return i; // if we have reached at target friend then simply return his chair number.
                        else break; //else we got chair number for current person no point in checking next.
                    }
                }
        }
        
        return 0;
    }
};