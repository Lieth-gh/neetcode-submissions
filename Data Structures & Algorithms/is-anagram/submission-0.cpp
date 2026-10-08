class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> firstWord;
unordered_map<char,int> secondWord;
for (char c : s){
    firstWord[c]++;
}
for (char c : t){
    secondWord[c]++;
}
if (firstWord == secondWord) return true;
else return false;

        
    }
};
