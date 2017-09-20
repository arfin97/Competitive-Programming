import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        Scanner sc = new Scanner(System.in);
        int n, k;
        int bill_no = 0;
        while(sc.hasNext()){
            n = sc.nextInt();
            k = sc.nextInt();
            if(n == 0 && k == 0) break;
            BigInteger sum = BigInteger.ZERO;
            BigInteger input = BigInteger.ZERO;
            for(int i = 0; i < n; i++){
                input = sc.nextBigInteger();
                sum = sum.add(input);
            }
            BigInteger divider = BigInteger.valueOf(k);
            BigInteger per_head = sum.divide(divider);
            bill_no++;
            System.out.println("Bill #"+bill_no+" costs "+sum+": each friend should pay "+per_head);
            System.out.println();
        }
    }
}
