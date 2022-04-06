package pep;

//import java.io.*;
import java.util.Scanner;

public class insertion {

	public static boolean greater(int a,int b)
	{
		if(a>=b)
		{
		return true;
		}
		return false;
		
		
	}
	
	public static void printing(int[] array,int x)
	{
		for(int i=0;i<x;i++)
		{
			System.out.print(array[i]+" ");
		}		
		System.out.println();
	}
	
	public static void insertion (int[] array,int x)
	{
		for(int i=1;i<x;i++)
		{
			for(int j=i-1,k=i;j>=0 && k>0 ;j--,k--)
			{
//				System.out.println("pre");
//				printing(array,x);
				
//				System.out.println("camparing"+array[k]+"and "+array[j]);
				if(greater(array[j],array[k])==true)
				{
//					System.out.println("swapping"+array[j]+"and "+array[k]);
					int temp=array[k];
					array[k]=array[j];
					array[j]=temp;
				}
//				System.out.println("post");
			}
			
		}
				printing(array,x);
		

	}
	
	public static void main(String[] maidas)
	{		
		Scanner input = new Scanner(System.in);
		int x;
		
		x = input.nextInt();
		int[] array= new int[x];
		
		
		for(int i=0;i<x;i++)
		{
			array[i]=input.nextInt();
		}
		
		insertion(array,x);
	}
	
}
