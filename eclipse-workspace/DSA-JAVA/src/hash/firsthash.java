package hash;
import java.util.*;

public class firsthash {
	
	public static int highestfre(String sentence)
	{
		int max = 0;
		int count= sentence.length()-1;
		char cha= 0;
		
		HashMap<Character,Integer> chi = new HashMap<>();
		while(count != 0)
		{
			cha=sentence.charAt(count);
			if(chi.containsKey(cha))
			{
				int value = chi.get(cha);
				value+=1;
				chi.put(cha,value);
			}
			else {
				
				chi.put(cha,1);
			}
			
			count--;
		}
		Set<Character> keys = chi.keySet();
		for(Character i : keys)
		{
			if(max< chi.get(i))
			{
				max=chi.get(i);
			}
			
		}
		return max;
	}
	
	public static void common(int[] arr1,int[] arr2)
	{
		int count1=arr1.length-1;
		int key1;
		HashMap<Integer,Integer> chi = new HashMap<>();
		while(count1 != -1)
		{
			key1 = arr1[count1];
			if(chi.containsKey(key1))
			{
				
				int value = chi.get(key1);
				value+=1;

				chi.put(key1,value);
			}
			else {
				chi.put(key1,1);

			}
			count1--;
		}
		System.out.println(chi);
		
		int count2=arr2.length-1;
		int key2;
		HashMap<Integer,Integer> chi1 = new HashMap<>();
		while(count2 != -1)
		{
			key2 = arr2[count2];
			if(chi1.containsKey(key2))
			{
				int value = chi1.get(key2);
				value+=1;

				chi1.put(key2,value);
			}
			else {
				
				chi1.put(key2,1);
			}
			count2--;
		}
		
		System.out.println(chi1);
		
		HashMap<Integer,Integer> checker= new HashMap<>();
		
		Set<Integer> set2 = chi1.keySet();
		
		for(int i : arr2)
		{
			if(!checker.containsKey(i))
			{
				checker.put(i,1);
				if(chi.containsKey(i))
				{
					System.out.print(i);
				}
			}
		}
		
	}
	
	public static void common1(int[] arr1,int[] arr2)
	{
		int count1=arr1.length-1;
		int key1;
		HashMap<Integer,Integer> chi = new HashMap<>();
		while(count1 != -1)
		{
			key1 = arr1[count1];
			if(chi.containsKey(key1))
			{
				
				int value = chi.get(key1);
				value+=1;

				chi.put(key1,value);
			}
			else {
				chi.put(key1,1);

			}
			count1--;
		}
		System.out.println(chi);
		
		int count2=arr2.length-1;
		int key2;
		HashMap<Integer,Integer> chi1 = new HashMap<>();
		while(count2 != -1)
		{
			key2 = arr2[count2];
			if(chi1.containsKey(key2))
			{
				int value = chi1.get(key2);
				value+=1;

				chi1.put(key2,value);
			}
			else {
				
				chi1.put(key2,1);
			}
			count2--;
		}
		
		System.out.println(chi1);
		
		HashMap<Integer,Integer> checker= new HashMap<>();
		
		int smaller=0;
		
		for(int i : arr2)
		{
			if(!checker.containsKey(i))
			{
				checker.put(i,1);
				if(chi.containsKey(i))
				{
					int fi=chi.get(i);
					int sc= chi1.get(i);
					
					if(fi >= sc)
					{
						smaller = sc;
					}
					else {
						smaller= fi;
					}
					
					while(smaller != 0)
					{
						System.out.println(i);
						smaller--;
					}
				
				}
			}
		}
		
	}
	
	public static void main(String[] dasd)
	{
		
		HashMap<Character,Integer> boom = new HashMap<>();
		Scanner input = new Scanner(System.in);
		
		int n1,n2;
		n1 = input.nextInt();
		
		int[] arr1 = new int[n1];
		
		for(int i= 0;i<n1;i++)
		{
			arr1[i] =input.nextInt();
		}
		
		n2= input.nextInt();
		int[] arr2 = new int[n2];
		for(int y= 0;y<n2;y++)
		{
			arr2[y]=input.nextInt();
		}
		
//		common(arr1,arr2);
		common1(arr1,arr2);
//		String word = input.next();
//		int max= highestfre(word);
//		System.out.print(max);
	}
}
