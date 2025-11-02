/*T.C. = O(logn)
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
/*int guess(int num);//API(Application Programming Interface) or predefined helper function
class Solution {
public:
    int guessNumber(int n) {
        int st = 1;
        int end = n;

        while(st<=end)
        {
            int mid = st+(end-st)/2;// This is better than (st+end)/2 as it prevents integer overflow

            if(guess(mid) == 0)
            {
                return mid;
            }

            else if(guess(mid) < 0)
            {
                end = mid-1;
            }

            else
            {
                st = mid+1;
            }
        }

        return -1;
    }
};
*/