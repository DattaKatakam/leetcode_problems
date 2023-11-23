class Solution {
public:
    string reformatDate(string date) {
        string dateFormat="", dateFor="", month = "", year = "";
        int count = 0;
        for(auto c: date){
            if(count == 0 & c!=' '){
                dateFor += c;
            }
            else if(count == 1 & c!=' '){
                month += c;
            }
            else if( c!=' '){
                year += c;
            }
            if(c == ' ') count++;
        }
        dateFormat += year +"-";
        dateFormat += getMonth(month)+"-";
        dateFormat += getDate(dateFor);
        return dateFormat;
    }
    string getDate(string dat){
        string returnDate = "";
        int count = 0;
        for(int i=0; i<dat.length()-2; i++){
            returnDate += dat[i];
            count++;
        }
        if(count == 2) return returnDate;
        else return "0"+returnDate;
    }
    string getMonth(string mon){
        if(mon == "Jan") return "01";
        else if(mon == "Feb") return "02";
        else if(mon == "Mar") return "03";
        else if(mon == "Apr") return "04";
        else if(mon == "May") return "05";
        else if(mon == "Jun") return "06";
        else if(mon == "Jul") return "07";
        else if(mon == "Aug") return "08";
        else if(mon == "Sep") return "09";
        else if(mon == "Oct") return "10";
        else if(mon == "Nov") return "11";
        else if(mon == "Dec") return "12";
        else return "null";
    }
};