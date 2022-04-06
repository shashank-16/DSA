package pep;

import java.util.*;

public class count_and_radix {
	
	public static int[] count_sort(int[] arr,int min,int max)
	{
		int size= arr.length;
		
		int range = max - min ;
		int[] fre = new int[range+1];
		int[] sorted= new int[range+1];
		int[] sort= new int[arr.length];
		
		//freg
		for(int i=0;i<size;i++)
		{	
			fre[arr[i]-min]+=1;
		}
		
//		for(int i=sorted.length - 1 ; i>=0;i--)
//		{
//			
//		}
		
		int tem = fre[0];
		tem=tem-1;
		fre[0]=tem;
		
		sorted[0]=fre[0];
		
		for(int i =1;i<=range;i++)
		{
			sorted[i]=sorted[i-1]+fre[i];
		}
		
		for(int i= size -1 ;i>=0;i--)
		{
			int cord = sorted[arr[i]-min];
			sort[cord]=arr[i];
			sorted[arr[i]-min]--; //shit
			
		}
		
		return sort;
		
	}
	

	public static int[] radix(int[] arr, int exp)
	{
		int size= arr.length;

		int range =10;
		int[] fre = new int[range];
		int[] sorted= new int[range];
		int[] sort= new int[arr.length];
		
		//freg
		for(int i=0;i<size;i++)
		{	
			fre[arr[i]/exp%10]+=1;
		}
	
		
		int tem = fre[0];
		tem=tem-1;
		fre[0]=tem;
		
		sorted[0]=fre[0];
		
		for(int i =1;i<range;i++)
		{
			sorted[i]=sorted[i-1]+fre[i];
		}
		
		for(int i= size -1 ;i>=0;i--)
		{
			int cord = sorted[arr[i]/exp%10];
			sort[cord]=arr[i];
			sorted[arr[i]/exp%10]--; //shit
			
		}
		
		return sort;
	}
	
	public static void radix_sort(int[] arr,int max)
	{
		
		int[] sort= new int[arr.length];
		int exp=1;
		while(true)
		{
			if(max== 0)
			{
				break;
			}
			if(exp==1)
			{
				sort=radix(arr,exp);
				
				
			}
			else {
				sort=radix(sort,exp);
			}
			System.out.print("After sorting on "+ exp+" place -> ");
			for(int i : sort)
			{
				System.out.print(i+" ");
			}
			System.out.println();
			max=max/10;
			exp*=10;
		}
		
		for(int i:sort)
		{
			System.out.print(i+" ");
		}
		
	}
	
	
	public static void main(String[] ads)
	{
		int n;
		
		Scanner cin = new Scanner(System.in);
		n=cin.nextInt();
		
		int[] arr = new int[n];
		
		for(int i=0;i<n;i++)
		{
			arr[i]=cin.nextInt();
		}
		
		int min,max;
		min=arr[0];
		max=arr[0];
		
		
		for(int i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max = arr[i];
			}
			else {
				if(min>arr[i])
				{
					min=arr[i];
				}
				
			}
		}
		radix_sort(arr,max);
//		int[] ma = count_sort(arr,min,max);
		
//		for(int i:ma)
//		{
//			System.out.print(i+" ");
//		}
//		
	}
	
}
