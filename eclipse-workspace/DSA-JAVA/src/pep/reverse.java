package pep;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class reverse {

	
	    public static void reverseArray(ArrayList<Integer> arr, int m)
	    {
	    int rotate=m+1;
	    int temp=0;
	    //rotation 
//	     int counter=0;
	    
//	    for(int i=0;i<arr.size();i++)
//	    {
//
//
//	        if(i == rotate)
//	        {
//	            temp = arr.get(i);
//			}
//	        else if(i>m)
//	        {
//				arr.set(i-1,arr.get(i));
//	            if(i == arr.size()-1 )
//	            {
//	                arr.set(i,temp);
//				}
//	        }
//		
//	    }
	    // reverse
	    
	    int temp1=0;
	    int temp2=0;

	    int dec=arr.size() -1;
	    for(int i =0;i<arr.size();i++)
	    {
	    	if(i<rotate)
	    	{

	    	}
	    	else if(i >= rotate   && i<=dec)
	    	{
	    	temp1 = arr.get(i);
	    	temp2= arr.get(dec);
//	    	System.out.println("temp1"  + temp1 + "temp2"+ temp2 );
	    		arr.set(dec, temp1);
	    		arr.set(i, temp2);
	    		dec--;
	    	}
	    	
	    }
	    
	    for(int i: arr)
    	{
    		System.out.print(i+ " ");
    	}
	    
	    
    }
	    public static void main(String[] afasd)
	    {
	    	int n,m;
	    	Scanner input = new Scanner(System.in);
	    	n=input.nextInt();
	    	m=input.nextInt();
	    	
	    	ArrayList<Integer> arr = new ArrayList<Integer>();
	    		    	
	    	for(int i=0;i<n;i++)
	    	{
	    		arr.add(i,input.nextInt());
	    	}
	    		
	    	reverseArray(arr,m);
	    }
	    
}
