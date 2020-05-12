package OJ.Pc2;

import java.math.BigInteger;
import java.util.Scanner;

public class bai11_contest5 {
    static Scanner scanner = new Scanner(System.in);
    static BigInteger[] dp = new BigInteger[101];
    public static void main(String[] args) {
        init();
        int T = scanner.nextInt();
        while(T>0){
            T--;
            int n = scanner.nextInt();
            System.out.println(dp[n]);
        }
    }

    private static void init() {
        dp[0] = new BigInteger("1",10);
        for(int i=1;i<=100;i++){
            dp[i] = new BigInteger("0",10);
            for(int j=0;j<=i-1;j++){
                dp[i] = dp[i].add(dp[j].multiply(dp[i-j-1]));
            }
        }
    }
}
