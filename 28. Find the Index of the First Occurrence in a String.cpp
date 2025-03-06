/**Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.**/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenH = haystack.size();
        int lenN = needle.size();
        for(int i=0;i<=lenH-lenN;i++){
            int l=0;
            int count=0;
            for(int k=i;k<i+lenN;k++){
                if(haystack[k]==needle[l]){
                    count++;
                }
                l++;
            }
            if(count==lenN){
                return i;
            }
        }
        return -1;
    }
};
