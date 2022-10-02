/*
What is an Anagram?
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Problem Statement:
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example:
Input: s = "anagram", t = "nagaram"
Output: true
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        
        unordered_map <char, int> answer;
        
        for(char c:s){
            answer[c]++;
        }
        for(char c:t){
            answer[c]--;
            if(answer[c] < 0) return false;
        }
        
        return true;
    }
};