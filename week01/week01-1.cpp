///Week01-1.cpp
///Leetcode 學習計畫
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///用迴圈把所有可能的位置找一次
        int H=haystack.length(), N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///從i開始剪出N個字母相同>找到答案
        }
        return -1;
    }

};
