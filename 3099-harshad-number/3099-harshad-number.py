class Solution(object):
    def sumOfTheDigitsOfHarshadNumber(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x == 100: 
            return 1
        else:
            a = x % 10
            b = (x % 100 - a) / 10
            if x % (a + b) == 0:
                return a + b
            else:
                return -1
        