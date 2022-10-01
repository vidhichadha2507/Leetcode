from enum import Enum

class RomanNumeral(Enum):
    I = 1
    V = 5
    X = 10
    L = 50
    C = 100
    D = 500
    M = 1000
    
    IV = 4
    IX = 9
    XL = 40
    XC = 90
    CD = 400
    CM = 900

class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        value = 0
        validCharacters = [name for name, value in RomanNumeral.__members__.items()]
        while len(s) > 0:
            if s[0:2] in validCharacters:
                value += RomanNumeral[s[0:2]].value
                s = s[2:]
            else:
                value += RomanNumeral[s[0:1]].value
                s= s[1:]
        return value
        
        