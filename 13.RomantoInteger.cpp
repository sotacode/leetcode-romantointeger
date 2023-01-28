#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        map<std::string, int> romanToInteger;
        romanToInteger["I"] = 1;
        romanToInteger["V"] = 5;
        romanToInteger["X"] = 10;
        romanToInteger["L"] = 50;
        romanToInteger["C"] = 100;
        romanToInteger["D"] = 500;
        romanToInteger["M"] = 1000;
        romanToInteger["IV"] = 4;
        romanToInteger["IX"] = 9;
        romanToInteger["XL"] = 40;
        romanToInteger["XC"] = 90;
        romanToInteger["CD"] = 400;
        romanToInteger["CM"] = 900;

        int sum = 0;
        int size = s.length();
        int limit = s.length()-1;
        for(int i=0; i < size ; i++){
            if(i<limit && romanToInteger.find(s.substr(i, 2)) != romanToInteger.end()){
                sum += romanToInteger[s.substr(i, 2)];
                i++;
            }else{
                std::string s_i(1, s[i]);
                sum += romanToInteger[s.substr(i, 1)];
            }
        }
        return sum;
    }
};