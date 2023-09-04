class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int len=s.size();
        if(len==1){
            return s;
        }
        else if(len<=k){
            reverse(s.begin(),s.end());
            return s;
        }
        string sub2;
        string sub1;
        string rt;
        while(i<len){
            if(i+(2*k)<len){
                sub1=s.substr(i,(2*k));
                sub2=sub1.substr(i,k);
                reverse(sub2.begin(),sub2.end());
                rt+=sub2+sub1.substr(i+k);
            }
            else if((i+(2*k))>len
            && i+k<len){
                sub1=s.substr(i);
                sub2=s.substr(i,k);
                reverse(sub2.begin(),sub2.end());
                rt+=sub2+sub1.substr(i+k);
            }
            else{
                sub1=s.substr(i);
                reverse(sub1.begin(),sub1.end());
                rt+=sub1;
            }
            i+=2*k;
        }
    return rt;
    }
};