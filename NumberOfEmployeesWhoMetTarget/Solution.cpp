class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int targetEmployees = 0;
        for(auto a: hours){
            if(a >= target) targetEmployees++;
        }
        return targetEmployees;
    }
};