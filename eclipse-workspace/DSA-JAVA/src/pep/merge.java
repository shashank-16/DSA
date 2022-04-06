package pep;

import java.util.Scanner;

public class merge {
	
	public static int[] merge(int[] array1,int[] array2)
	{
		int i=0,j=0;
		
		int alen = array1.length;
		int blen = array2.length;
		
		int[] sorted= new int[alen+blen];
		int counter=0;
		
		while(i<alen && j <blen)  // both have same lenght if x =4 and y =2 then these loop go till 2 coutner ,,-2
		{
			if(array1[i]>array2[j])
			{
				sorted[counter]=array2[j];
				j++;
				counter++;
			}
			else {
				sorted[counter]=array1[i];
				i++;
				counter++;
			}
		}
		
		while(i< alen)
		{
			sorted[counter]=array1[i];
			i++;
			counter++;
		}
		while(j<blen)
		{
			sorted[counter] =array2[j];
			j++;
			counter++;
			
		}
		return sorted;
		
	}
	
	public static int[] mergesort(int[] array,int i,int j)
	{
		if(i == j)
		{
			int [] ba = new int[1]; 
			ba[0]=array[j];
			return ba;
//			return array;
		}
		
		int mid = (i+j)/2;
		int[] firsthalf=mergesort(array,i,mid);
		int[] secondhalf= mergesort(array,mid+1,j);
		int [] finalresult = merge(firsthalf,secondhalf);
		
		return finalresult;
		
	}
	
	public static void main(String[] sdas)
	{
		Scanner input = new Scanner(System.in);
		int x;
		
		x = input.nextInt();

		int[] array1= new int[x];
		
		int[] sorted = new int[x];

		for(int i=0;i<x;i++)
		{
			array1[i]=input.nextInt();
		}
		sorted =mergesort(array1,0,array1.length-1);
		
		for(int i : sorted)
		{
			System.out.println(i);
		}
			
		
	}
}
