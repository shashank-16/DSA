package pep;
import java.util.ArrayList;
import java.util.List;
import java.lang.reflect.Array;
import java.util.Scanner;

public class transactions {



		public static void main(String[] asda) throws Exception
		{
			Scanner input = new Scanner(System.in);
			
//			String data= input.next();
//			printf(data);
			
			int n= input.nextInt();
			
			
			int[] array = new int[n];
			
			for(int i=0;i<n;i++)
			{
				array[i]=input.nextInt();
				
			}
			
			int k = input.nextInt();
			
			
			int min=array[0];
			int max=0;
			int profit = 0;
			
			 List<Integer> array_max=new ArrayList<Integer>();
			
//			max_array[0]=0;
			
			for(int i=1;i<n;i++)
			{
//				max_array[i]=0;
				if(min<=array[i]) // dropp checking  <---
				{
					
					profit= array[i]- min;
					if(max<profit)
					{
						max =profit;
						array_max.add(max);
//						max_array[i]= max;
						
					}
				}
				else {
					min = array[i];
				}
			}
				int result=0;
				
			int inr= array_max.size();
			while(true)
			{
				
				k--;
				result+=array_max.get(inr-1);
				
				if(k==0)
				{
					break;
				}
				inr--;
			
				
			}
			System.out.print(result);
					
		}
		
		public static void printf(String massage)
		{
			System.out.print(massage);
		}
	}

