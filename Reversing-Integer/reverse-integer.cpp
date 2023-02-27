/*
This program reverses an integer by extracting each digit one by one using modulo division and placing them in reverse order in a new integer variable. It also checks for integer overflow and underflow and returns 0 if the reversed integer is out of the valid range of the int data type. It achieves this by looping through the digits of the input integer and updating the reversed integer in each iteration until all digits are processed.

*/

class Solution{
public:
    int reverse(int x){
        int ans = 0;

        // loop unitil x is 0, x = x/10 will eventually make it 0 
        while (x != 0){
            // extracting each digit one by one 
            int rem = x % 10 ;  
            
            // check integer underflow and overflow 
            if (ans > INT_MAX/10 || and < INT_MIN/10){
                return 0;
            }


            // placing all the reversed digit one-by-one
            ans = ans * 10 + rem;
            // In every loop the x is sliced to smaller. 
            x = x / 10
        }

        return ans;
    }
};
