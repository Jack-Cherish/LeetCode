class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        if moves.count('U') == moves.count('D') and moves.count('R') == moves.count('L'):
            return True
        else:
            return False