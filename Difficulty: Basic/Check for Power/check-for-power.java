// User function Template for Java
class Solution {
    public boolean isPowerOfAnother(int X, int Y) {
        // code here
        for(int i=0;i<Y;i++)
        {
            if(Math.pow(X,i)==Y)
                return true;
            else if(Math.pow(X,i)>Y)
                break;
        }
        return false;
    }
}
