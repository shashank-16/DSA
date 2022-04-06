package pep;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class sum_pair {
	public static int[][] print(int[][] matrix,int n)
	{
		int[][] world=new int[n][n];
		for(int i =0;i<n;i++)
		{
			for(int j =0;j<n;j++)
			{
				world[i][j]=matrix[i][j];
			}
		}
		return world;
	}
	
    public static int[][] pairSum(int[] arr, int s) {
       	int last=arr.length-1;
 		int first = 0;
        int counter=0;
//
  		Arrays.sort(arr);
 		
           int[][] result1=new int[arr.length][2];
        
 		for(int i =0;i<arr.length;i++)
 		{
 			if(arr[first]+arr[last]>s)
 			{
 				last--;
 			}
 			 if(arr[first]+arr[last] == s)
 			{
//  				System.out.print("("+arr[first]+","+arr[last]+")"); 
                 result1[counter][0]=arr[first];
                 result1[counter][1]=arr[last];
                counter++;
 				first++;
 			} if(first>=last) {
 				break;
 			}
		}
        int[][] result=new int[counter][2];
        for(int i =0;i<counter;i++)
 		{
                result[i][0]=result1[i][0];
             result[i][1]=result1[i][1];
            
        }
       
        return result;
    }
	
	public static void main(String[] asdsa)
	{
		int n,sum;
		Scanner cin = new Scanner(System.in);
		n=cin.nextInt();
		int[] matrix=new int[n];
 		for(int i =0;i<n;i++)
		{
			matrix[i]= cin.nextInt();
		}
 		sum=cin.nextInt();
 		int last=matrix.length-1;
 		int first = 0;
 	
 		 
 		Arrays.sort(matrix);
 		
 		int[][] ru=pairSum(matrix,sum);
 		
 		for(int i =0;i<ru.length;i++)
 		{
             System.out.println(ru[i][0]+"  " + ru[i][1]);
        }
 		
// 		for(int i =0;i<n;i++)
// 		{
// 			if(matrix[first]+matrix[last]>sum)
// 			{
// 				last--;
// 			}
// 			 if(matrix[first]+matrix[last] == sum)
// 			{
// 				System.out.print("("+matrix[first]+","+matrix[last]+")"); 
// 				first++;
// 			} if(first>=last) {
// 				break;
// 			}
// 			
//			
//		}
	}
}
