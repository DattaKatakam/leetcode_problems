class Solution {
public:
    vector<string> letterCombinations(string digits) {
        std::unordered_map<std::string, std::vector<std::string>> phoneNums = {
            {"1", {""}},
            {"2", {"a", "b", "c"}},
            {"3", {"d", "e", "f"}},
            {"4", {"g", "h", "i"}},
            {"5", {"j", "k", "l"}},
            {"6", {"m", "n", "o"}},
            {"7", {"p", "q", "r", "s"}},
            {"8", {"t", "u", "v"}},
            {"9", {"w", "x", "y", "z"}}
        };
        vector<string> finalResult;
        if(digits.size() == 0){
            return finalResult;
        }

        string currentCombination = "";
        generateCombinations(digits, 0, currentCombination, finalResult, phoneNums);

        return finalResult;

    }
    void generateCombinations(const string& digits, int index, string& currentCombination,
                              vector<string>& finalResult, const std::unordered_map<string, std::vector<std::string>>& phoneNums) {
        if (index == digits.size()) {
            finalResult.push_back(currentCombination);
            return;
        }

        string currentDigit = string(1, digits[index]);
        const vector<string>& letters = phoneNums.at(currentDigit);

        for (const string& letter : letters) {
            currentCombination.push_back(letter[0]);
            generateCombinations(digits, index + 1, currentCombination, finalResult, phoneNums);
            currentCombination.pop_back();
        }
    }
};