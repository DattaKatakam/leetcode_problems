class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month < 3){
            month += 10;
            year--;
        }
        else month -= 2;
        int J = year / 100;
        int K = year % 100;
        int h = (day + ((13 * month - 1) / 5) + K + (K / 4) + (J / 4) - (2 * J)) % 7;
        int updatedH;
        if(h<0){
            updatedH = -1 * abs(h)%7 + 7;
        }
        else updatedH = h%7;
        std::vector<string> daysString = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return daysString.at(updatedH);
    }
};