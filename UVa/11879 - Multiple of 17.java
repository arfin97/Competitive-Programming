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
        
        while(sc.hasNext()){
            BigInteger n = sc.nextBigInteger();
            BigInteger det = n.mod(new BigInteger("17"));
            if(det.compareTo(new BigInteger("0")) == 0 ){
                System.out.println("1");
            }else{
                System.out.println("0");
            }
        }
        sc.close();
    }
}
