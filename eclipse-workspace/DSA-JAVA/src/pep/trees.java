package pep;

//import java.awt.datatransfer.SystemFlavorMap;
import java.util.Scanner;
import java.math.*;

public class trees {
	
	public static void main(String[] ad)
	{
		int n;
		Scanner cin = new Scanner(System.in);
		n=cin.nextInt();
		int m= n*2;
		for(int i=0;i<2*n+1;i++)
		{
			for(int j=0;j<2*n+1;j++)
			{
				if(i==0 || i == 2*n)
				{
					System.out.print(Math.abs(j-n));
					
//						System.out.print("*");
				}
				else if(i==j)
				{
					System.out.print(Math.abs(j-n));
//					System.out.print("*");
				}
				else if(i+j==2*n)
				{
					System.out.print(Math.abs(j-n));
//					System.out.print("*");
				}
				else if(i<=j && i+j<=2*n)
				{
					System.out.print(Math.abs(j-n));
//					System.out.print("*");
				}
				else if(i>=j && i+j>=2*n)
				{
					System.out.print(Math.abs(j-n));
//					System.out.print("*");
				}
				else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}
