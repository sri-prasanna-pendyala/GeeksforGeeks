//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.nthFibonacci(n));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public int nthFibonacci(int n) {
        // Brute force approach using loop
        // int n1=1,n2=1,fib=0;
        // if(n==2 || n==1)
        //     return 1;
        //else if(n==0)
        //  return 0;
        // else{
        //     while(n>=3)
        //     {
        //         fib=n1+n2;
        //         n1=n2;
        //         n2=fib;
        //         n--;
        //     }
        // }
        // return fib;
        
        //Optimized solution using recursion
        if(n>=3)
            return nthFibonacci(n-1)+nthFibonacci(n-2);
        else if(n==0)
            return 0;
        else 
            return 1;
    }
}