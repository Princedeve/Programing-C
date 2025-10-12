public class check{
    public static boolean isPrime(int n){
        boolean isPrime = true;
        for(int i = 2; i<n; i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }

        return isPrime;
    }
    public static int sumOfDigit(int n){
        int sum = 0;
        while (n != 0) {
            int d = n % 10;
            sum += d;
            n = n / 10;
        }
        return sum;
    }

    public static int pow(int a, int b){
        int pow = 1;
        for(int i = 1; i<=b; i++){
            pow = pow * a; 
        }
        return pow;
    }
    public static int binaryToDecimal(int n){
        int binary = 0;
        for(int i = 0; n>0; i++){
            int last = n % 10;
            int pow = pow(2, i);
            binary = binary + pow * last;
            n = n / 10;
        }
        return binary;
    }
    public static int count(int n){
        int count = 0;
        while (n!=0) {
            n = n /10;
            count++;
        }
        return count;
    }
    public static boolean isArmstrong(int n){
        int original = n;
        int rev = 0;

        while (n>0) {
            int d = n % 10;
            int count = count(original);
            int pow = pow(d, count);
            rev = rev + pow;
            n = n / 10;
        }
        if(rev == original){
            return true;
        }else{
            return false;
        }
    }
    public static boolean isPalindrome(int n){
        int original = n;
        int rev = 0;
        while (n > 0) {
            int d = n % 10;
            rev = rev * 10 + d;
            n = n /10;
        }
        if(rev == original){
            return true;
        }else{
            return false;
        }
    }
    public static void main(String args[]){
        // int n = 10101;
        // int n = 153;
        
        // System.out.println(binaryToDecimal(n));
        // System.out.println(isArmstrong(n));
        // System.out.println(count(n));
        // System.out.println(pow(3, 3));
        // System.out.println(isPrime(n));
        // System.out.println(isPalindrome(n));
        
    }
}
