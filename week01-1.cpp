///Week01-1.cpp
///Leetcode �ǲ߭p�e
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�ΰj���Ҧ��i�઺��m��@��
        int H=haystack.length(), N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///�qi�}�l�ťXN�Ӧr���ۦP>��쵪��
        }
        return -1;
    }

};
