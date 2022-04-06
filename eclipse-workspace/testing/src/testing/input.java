package testing;

import java.lang.reflect.Array;
import java.util.Scanner;


public class input {
	

	public static void main(String[] asda) throws Exception
	{
		Scanner input = new Scanner(System.in);
		
//		String data= input.next();
//		printf(data);
		
		int n= input.nextInt();
		
		
		int[] array = new int[n];

		for(int i=0;i<n;i++)
		{
			array[i]=input.nextInt();
			
		}
		
		int min=array[0];
		int max=0;
		int profit = 0;

		
		for(int i=1;i<n;i++)
		{
			if(min<=array[i])
			{
				profit= array[i]- min;
				if(max<profit)
				{
					max =profit;
				}
			}
			else {
				min = array[i];
			}
		}
		
//		for(int inter: array)
		System.out.print(max);
		

		
		
	}
	
	public static void printf(String massage)
	{
		System.out.print(massage);
	}
}
