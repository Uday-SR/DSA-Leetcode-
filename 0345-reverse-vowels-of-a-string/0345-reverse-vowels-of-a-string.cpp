class Solution {
public:
    string reverseVowels(string s) {
        unordered_set <char> vowels = {'a', 'i', 'e', 'u', 'o', 'A', 'I', 'E', 'U', 'O'};
        int i = 0;
        int j = s.size()-1;

        while(i < j) {

            while(i < j && vowels.count(s[i]) == 0) i++;
            while(i < j && vowels.count(s[j]) == 0) j--;

            if(i < j) {
                swap(s[i], s[j]);
                i++, j--;
            }
        }
        
        return s;
    }
};