class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        string newS = s;
        while(j > i){
            while(!isVowel(std::tolower(s[i])) && j > i) i++;
            while(!isVowel(std::tolower(s[j])) && j > i) j--;
            char c = newS[i];
            newS[i] = newS[j];
            newS[j] = c;
            i++;
            j--;
        }
        return newS;
    }
    bool isVowel(char c){
        return (c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u');
    }
};