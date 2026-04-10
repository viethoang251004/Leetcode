class Solution {
public:
    bool judgeCircle(string moves) {
        int totalLeftMoves = 0;
        int totalRightMoves = 0;
        int totalUpMoves = 0;
        int totalDownMoves = 0;

        for (char countMoves : moves) {
            if (countMoves == 'L') {
                totalLeftMoves += 1;
            } else if (countMoves == 'R') {
                totalRightMoves += 1;
            } else if (countMoves == 'U') {
                totalUpMoves += 1;
            } else if (countMoves == 'D') {
                totalDownMoves += 1;
            }
        }

        if (totalLeftMoves == totalRightMoves && totalUpMoves == totalDownMoves) {
            return true;
        } else {
            return false;
        }
    }
};