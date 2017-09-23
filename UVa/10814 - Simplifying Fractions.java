import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        //fast I/O
        PrintWriter pr = new PrintWriter(new BufferedWriter(
                new OutputStreamWriter(System.out)));
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(
                System.in)));
        ////////////////////////////////////////////////
        
        BigInteger tc = sc.nextBigInteger();
        BigInteger tr = BigInteger.ZERO;
        
        for(;tr.compareTo(tc) < 0; tr = tr.add(BigInteger.ONE)){
            
            BigInteger nominator = sc.nextBigInteger();
            sc.next(); //getting rid of '/'
            BigInteger denominator = sc.nextBigInteger();
            
            BigInteger gcd = nominator.gcd(denominator);
            
            nominator = nominator.divide(gcd);
            denominator = denominator.divide(gcd);
            
            System.out.println(nominator + " / " + denominator);
            //pr.println(nominator + " / " + denominator);
        }
        sc.close();
    }
}
