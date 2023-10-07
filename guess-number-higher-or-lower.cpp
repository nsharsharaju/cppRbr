/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int begin = 1;
        long long int end = n;
        long long int mid;

        while(mid>=1 && mid<=n) {
            mid = (begin+end)/2;
            int g = guess(mid);
            if(g == 0) return mid;
            else if(g == -1) end = mid - 1;
            else begin = mid + 1;
        }
        return -1;
    }
};