class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<2) return true;
        double slope = getSlope(coordinates.at(0), coordinates.at(1));
        for(int i = 1, j = i+1; j<coordinates.size(); i++, j++){
            double instSlope =  getSlope(coordinates.at(i), coordinates.at(j));
            if(slope != instSlope) return false;
        }
        return true;
    }
    double getSlope(vector<int>& p1, vector<int>& p2){
        if (p2.at(0) == p1.at(0) || (p2.at(0)-p1.at(0)) == 0)
            return std::numeric_limits<double>::infinity();
        return static_cast<double>(p2.at(1)-p1.at(1))/(p2.at(0)-p1.at(0));
    }
};