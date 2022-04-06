package pep;

import java.util.*;

public class rohan_question {
	public static ArrayList<Integer> removeelement(ArrayList<Integer> array)
	{
		int result=0;
		
		ArrayList<Integer> world= new ArrayList<Integer>();
		world.add(array.get(0));
		
		
		for(int i=0;i<array.size();i++)
		{
			boolean exist = false;
			for(int j=0;j<world.size();j++)
			{
				
//				System.out.println("inside from loop"+world.get(j)+"array element" + array[i]);
				if(world.get(j) == array.get(i))
				{
					exist = true;
				}
				else {
					if(j == world.size()-1 && !exist)
					{						
						world.add(array.get(i));
					}
					
				}
			}
			exist = false;
		}
		
//		for(int i=0;i<world.size();i++)
//		{
//			if(i<6)
//			{
//				result = result+world.get(i);				
//			}
//		}
//		result = result%6;
		return world;
		
	}
	
	public static void main(String[] adasd)
	{
		Scanner input=  new Scanner(System.in);
		int x = input.nextInt();
		ArrayList<Integer> array=new ArrayList<Integer>();
		for(int i=0 ;i<x;i++)
		{
			array.add(input.nextInt());
			
		}
		
		ArrayList<Integer> removed = removeelement(array);
		for(int i=0;i<removed.size();i++)
		{
			System.out.println(removed.get(i));
		}
//		System.out.println(removeelement(array));
		
	}
}

