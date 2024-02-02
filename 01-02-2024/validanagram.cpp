/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false*/


class Solution {
public:
        bool isAnagram(string s, string t) {
        map<char, int> count;
        
        for(char c : s){
            if(count.find(c) == count.end()){
                count[c] = 1;
            }else{
                count[c] += 1;
            }
        }
        
        for(char c : t){
            map<char, int>::iterator it = count.find(c);
            if(it == count.end()){
                return false;
            }else if(count[c] > 1){
                count[c] -= 1;
            }else{
                count.erase(it);
            }
        }
        
        if(count.empty()) return true;
        return false;
    }
};
