class Solution {
public:
    int canBeTypedWords(string text, string bl) {
        int cnt =0, res =0;
	for (int i=0; i<text.length(); i++) 
	{
		for (int j=0; j<bl.length(); j++)
		{
			if (text[i]==bl[j]) 
				cnt=1;
		}
		if (text[i]==' ' || i==text.length()-1)
		{
			if (cnt==0) res++;
			else cnt=0;
		}
	}
	return res;  
    }
};