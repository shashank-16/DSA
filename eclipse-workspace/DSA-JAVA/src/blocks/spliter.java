package blocks;
import java.util.*;
public class spliter {
	public static void main(String[] aeda)
	{
		 int n;
		 int k ;
		Scanner input = new Scanner(System.in);
		n=input.nextInt();
		k=input.nextInt();
		int[][] arr= new int[k+1][n+1];
		
		for(int i=0;i<k+1;i++)
		{
			for(int j=0;j<n+1;j++)
			{
				if(i == 0 || j ==0)
				{
					arr[i][j]=0;
				}
				else if(i==j && i!=0)
				{
					arr[i][j]=1;
				}
				else if(j<i)
				{
					arr[i][j]=arr[i-1][j];
				}
				else {
					int tem=Math.abs(j-i);
					if(arr[i-1][tem]!=0)
					{
						arr[i][j]=1+arr[i-1][tem];
						
					}
					else {
						arr[i][j]=0;
					}
					
				}
				
			}
		}
		
//		for(int i=0;i<k;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				System.out.print(arr[i][j]+" ");
//			}
//			System.out.println();
//		}
		
		if(arr[k][n]==0)
		{
			System.out.print(-1);
		}
		else {
			
			System.out.print(arr[k][n]);
		}
	}
}

