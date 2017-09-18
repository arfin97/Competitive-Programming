import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
		int n = sc.nextInt();
		BigInteger a = sc.nextBigInteger();
		BigInteger ans = BigInteger.ZERO;
		for(int i = 1; i <= n; i++){
			ans = ans.add(BigInteger.valueOf(i).multiply((a.pow(i))));	
		}
		System.out.println(ans);
		}
	}
}
