class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        int i =s.length()-1;
        while(i>=0 ){
            if(i-1>=0){
                if(s[i] == 'I'){
                    number += 1;
                }
                else if(s[i] == 'V'){
                    if(s[i-1] == 'I'){
                        number += 4;
                        i--;
                    }
                    else{
                        number += 5;
                    }
                }
                else if(s[i] == 'X'){
                    if(s[i-1] == 'I'){
                        number += 9;
                        i--;
                    }
                    else{
                        number += 10;
                    }
                }
                else if(s[i] == 'L'){
                    if(s[i-1] == 'X'){
                        number += 40;
                        i--;
                    }
                    else{
                        number += 50;
                    }
                    // number += 50;
                }
                else if(s[i] == 'C'){
                    if(s[i-1] == 'X'){
                        number += 90;
                        i--;
                    }
                    else{
                        number += 100;
                    }
                    // number += 100;
                }
                else if(s[i] == 'D'){
                    if(s[i-1] == 'C'){
                        number += 400;
                        i--;
                    }
                    else{
                        number += 500;
                    }
                    // number += 500;
                }
                else if(s[i] == 'M'){
                    if(s[i-1] == 'C'){
                        number += 900;
                        i--;
                    }
                    else{
                        number += 1000;
                    }
                    // number += 1000;
                }
            }
            else{
                if(s[i] == 'I'){
                number += 1;
            }
            else if(s[i] == 'V'){
                number += 5;
            }
            else if(s[i] == 'X'){
                number += 10;
            }
            else if(s[i] == 'L'){
                number += 50;
            }
            else if(s[i] == 'C'){
                number += 100;
            }
            else if(s[i] == 'D'){
                number += 500;
            }
            else if(s[i] == 'M'){
                number += 1000;
            }
            }

            i--;
        }
        return number;
    }
};