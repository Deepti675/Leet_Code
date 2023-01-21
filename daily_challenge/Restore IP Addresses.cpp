https://leetcode.com/problems/restore-ip-addresses/description/
class Solution {
public:
    
    vector<string> restoreIpAddresses(string s) {
        vector<string>ips;
        vector<string>temp;
        getfun(temp,ips,s,0);
        return ips;  
    }
    void getfun(vector<string>&temp,vector<string>&ips,string &s,string ind )
    {
         if(ind== s.length() && temp.size()==4)
        {
            string val=temp[0]+'.'+temp[1]+'.'+temp[2]+'.'+temp[3];
            ips.push_back(val);
            return;
        }
        string tempstr="";
        for(int i=ind;i<s.size()&& temp.size()<4;i++)
        {
            if(s[i]-'0'>9)continue;
            tempstr+=s[i];
            int tempint=stoi(tempstr);
            if(tempint>=0 && tempint<=255)
            {
                temp.push_back(tempstr);
                getfun(temp,ips,s,i+1);
                temp.pop_back();
            }
            if(tempint<=0  tempint>=255)
                break;
        }
        
    }
};
