class Solution {
public:
    int dayOfYear(string date) {
        int month = getValues(date).at(1);
        int day = getValues(date).at(2);
        int year = getValues(date).at(0);
        int days = 0, i = 1;
        while(i < month){
            if(i<=7){
                if( i == 2){
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                        days += 29;
                    } else {
                        days += 28;
                    }
                }
                else if(i % 2 == 0){
                    days += 30;
                }
                else{
                    days += 31;
                }
            }
            else{
                if(i % 2 != 0){
                    days += 30;
                }
                else{
                    days += 31;
                }
            }
            i++;
        }
        days+= day;
        return days;
    }
    vector<int> getValues(string date){
        std::vector<int> returnVector;
        string year="", month="", day="";
        int y=0, m = 0, d = 0;
        int count = 0;
        for(auto a: date){
            if(count == 0 && a!='-'){
                year += a;
                y = y * 10 + (static_cast<int>(a) - 48);
            }
            else if(count == 1 && a!= '-'){
                month += a;
                m = m * 10 + (static_cast<int>(a) - 48);
            }
            else if(a!='-'){
                day +=a;
                d = d * 10 + (static_cast<int>(a) - 48);
            }
            if(a == '-') count++;
        }
        returnVector.push_back(y);
        returnVector.push_back(m);
        returnVector.push_back(d);
        return returnVector;
    }
};