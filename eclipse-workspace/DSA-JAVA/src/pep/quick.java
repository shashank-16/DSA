package pep;

import java.util.Scanner;


public class quick {

	
	public static  void quick_sort(int[] arr, int i,int j)
	{
		
		if(i >= j)
		{
			for(int t: arr)
			{
				System.out.print(t+" ");
			}
			System.out.println("retri"+i +"--"+ j );
			return;
		}
		
		int pivot=arr[i];
		int end = j;
		for(int start=i;;)
		{
			if(start<=end)
			{	
				if(pivot>=arr[start])
				{
						start++;
				}
				else if(pivot<arr[end]){
						
						end--;
				}
				else
				{
					int temp =arr[start];
					arr[start]=arr[end];
					arr[end]=temp;
				}
			}
			else
			{ 	int temp= arr[end];
				arr[end]=pivot;
				arr[i]=temp;
				break;
				
			}
		}
		
		quick_sort(arr,i,end-1); // left 
		quick_sort(arr,end+1,j); // right
	}
	
	

	
	public static void main(String[] sda)
	{
		int n;
		Scanner cin = new Scanner(System.in);
		n=cin.nextInt();
		int[] arr= new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=cin.nextInt();
		}
		
		
		
			 quick_sort(arr,0,arr.length-1);
			for(int i: arr)
			{
				System.out.print(i+" ");
			}
	}
}
