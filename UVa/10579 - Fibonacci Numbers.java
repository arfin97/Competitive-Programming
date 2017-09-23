import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        Scanner sc = new Scanner(System.in);
        int n;
        BigInteger[] fib = new BigInteger[1000003];
        BigInteger num1 = BigInteger.ZERO;
        BigInteger num2 = BigInteger.ONE;
        fib[0] = num1;
        fib[1] = num2;
        for(int i = 2; i <= 100000; i++){
            num1 = fib[i-2];
            num2 = fib[i-1];
            fib[i] = num1.add(num2);
        }
        while(sc.hasNext()){
            n = sc.nextInt();
            System.out.println(fib[n]);
        }
    }
}
