class Solution{
public:	
	string addBinary(string a, string b)
	{   
	    if(a.find("1") != string::npos)
	        a = a.substr(a.find("1"));
	       
	    if(b.find("1") != string::npos)
	        b = b.substr(b.find("1"));
	   
	    int i = a.length()-1, j = b.length()-1;
        char c = '0';
        string ans = "";
    
        while(i >= 0 && j >= 0) {
            if(a[i] == '1' && b[j] == '1'){
                if(c == '0') 
                    ans.push_back('0');
                else 
                    ans.push_back('1');
                c = '1';
            }
            else if(a[i] == '0' && b[j] == '0') {
                if(c == '0') 
                    ans.push_back('0');
                else {
                    ans.push_back('1');
                    c = '0';
                }
            }
            else {
                if(c == '0') 
                    ans.push_back('1');
                else {
                    ans.push_back('0');
                    c = '1';
                }
            }
            i--;
            j--;
        }
    
        while(i >= 0) {
            if(c == '0') {
                ans.push_back(a[i]);
            }
            else {
                if(a[i] == '0'){
                    ans.push_back('1');
                    c = '0';
                }
                else 
                    ans.push_back('0');
            }
            i--;
        }
    
        while(j >= 0) {
            if(c == '0') {
                ans.push_back(b[j]);
            }
            else {
                if(b[j] == '0'){
                    ans.push_back('1');
                    c = '0';
                }
                else 
                    ans.push_back('0');
            }
            j--;
        }
    
        if(c == '1') ans.push_back('1');
    
        reverse(ans.begin(),ans.end());
    
        return ans;
	}
};
