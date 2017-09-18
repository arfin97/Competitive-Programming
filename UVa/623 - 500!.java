import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
		int n = sc.nextInt();
		BigInteger fact = BigInteger.ONE;
		BigInteger tracker = BigInteger.ONE;
		
		for(int i = 0; i < n; i++){
			fact = fact.multiply(tracker);
			tracker = tracker.add(BigInteger.ONE);
		}
		System.out.println(n+"!");
		System.out.println(fact);
	}
}
}
