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
        int tc = sc.nextInt();
        for(int tr = 1; tr <= tc; tr++){
	        BigInteger n = sc.nextBigInteger();
	        BigInteger m = sc.nextBigInteger();
	        String n_str = new StringBuilder(n.toString()).reverse().toString();
	        String m_str = new StringBuilder(m.toString()).reverse().toString();
	        n = new BigInteger(n_str);
	        m = new BigInteger(m_str);
	        BigInteger result = n.add(m);
	        String result_str = new StringBuilder(result.toString()).reverse().toString();
	        int i = 0;
	        while(result_str.charAt(i) == '0')
	        	i++;
	        for(; i < result_str.length(); i++){
	        	System.out.print(result_str.charAt(i));
	        }
	        System.out.println();
        }
    }
}
