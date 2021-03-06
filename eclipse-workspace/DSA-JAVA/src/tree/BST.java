package tree;
import java.util.*;

import pep.*;

public class BST {
	public static class node{
		int data;
		node left;
		node right;
		
		public node() {
			
		}
		
		public node(int value,node left,node right)
		{
			this.data= value;
			this.left = left;
			this.right=right;
			
		}	
	}
	
	public static node constructor(int left,int right,int[] array)
	{
		if(left>right)
		{
			return null;
		}
		
		int mid=(left+right)/2;
		int value=array[mid];
		
	
		node ln=constructor(left,mid-1,array);
		node rn= constructor(mid+1,right,array );
		
		node temp= new node(value,ln,rn);
		
		return temp;
	}
	
	public static void display(node root)
	{
		if(root == null)
		{
			return;	
		}
		
		String str = "<-"+ root.data +"->";
		str+= (root.left == null)?".":"left value"+root.left.data;
		str+=(root.right == null)? ".": "right value"+root.right.data;

		System.out.println(str);
		display(root.left);
		display(root.right);
	}
	
	public static int max(node temp)
	{
		int max=temp.data;
		if(temp.left == null && temp.right == null)
		{
			return temp.data;
			
		}
		
		int leftv=(temp.left == null)?0:max(temp.left);
		int rightv= (temp.right == null)? 0: max(temp.right );
		
		if(leftv > rightv)
		{
			if(leftv>max)
			{
				max = leftv;
			}
			
		}
		else {
			if(rightv>max)
			{
				max = rightv;
			}
		}
		
		return max;
	}
	
	public static int min (node temp)
	{
		int min =temp.data;
		if(temp.left == null && temp.right==null)
			{
				return min;
			}
		
		int leftv=(temp.left == null)?temp.data:min(temp.left);
		int rightv= (temp.right == null)?temp.data: min(temp.right );
		
		if(leftv < rightv)
		{
			if(leftv <min)
			{
				min = leftv;
			}
			
		}
		else {
			if(rightv < min)
			{
				min = rightv;
			}
		}
		return min;
	}
	
	public static int sum(node temp)
	{
//		int sum=temp.data;
		int sum =0;
		if(temp.left == null && temp.right == null)
		{
			return temp.data;
		}
		
		int suml = (temp.left == null) ?0 : sum(temp.left);
		int sumr = (temp.right == null) ? 0: sum(temp.right);
		
		sum= suml+sumr+temp.data;
		
		return sum;
		
	}

	public static boolean find(node temp,int value)
	{
		boolean result=false;
		if(temp.data == value)
		{
			return true;
		}
		
		if(temp.left !=null && temp .right!=null)
		{
//			System.out.println("1root data" + temp.data + "left data "+ temp.left .data + " roght data" + temp.right.data);
			if(value> temp.left.data)
			{
				result = find(temp.right ,value);
			}else {
				result = find(temp.left,value);
			}
		}
		else if(temp.left  == null && temp.right !=null)
		{
//			System.out.println("2root data" + temp.data+ " roght data" + temp.right.data);
			
			result = find(temp.right,value);
		}
		else if(temp.left !=null && temp.right ==null){
//			System.out.println("3root data" + temp.data + "left data "+ temp.left .data );
			
			result= find(temp.left,value);
		}
		else {
			
		}
		if(result == true)
		{
			return true;
		}
		
		return result;
	}
	
	public static node addnode(node temp,int data)
	{
		//  propor code for the is in binary class 
		node nl = null;
		node nr = null;
		
		if(temp == null)
		{
			node nn = new node(data,null,null);
			return nn;
		}
		
		if(data>temp.data)
		{
			nr = addnode(temp.right,data);
			temp.right = nr;
		}
		else if(data <temp.data)
		{
			nl = addnode(temp.left,data );
			temp.left = nl;
		}
		else {
			
		}

		return temp;
	}
	
	public static  node remove(node temp,int data)
	{
	if(temp ==null)
	{
		return null;
	}
	
		if(data>temp.data)
		{
			temp.right = remove(temp.right,data);
			return temp;
		}
		else if(data< temp.data) {
			temp.left = remove(temp.left,data);
			return temp;
		}
		else {
			if(temp.left == null && temp.right == null)
			{
				return null;
			}
			else if(temp.left == null)
			{
				
				return temp.right;
			}
			else if(temp.right == null)
			{
				return temp.left;
			}
			else {
				int max = max(temp.left);
				temp.data = max;
				temp.left = remove(temp.left,max);
				return temp;
			}
		}

	}
	
	public static int size(node temp)
	{
		int size=1;
		if(temp == null)
		{
			return size;
		}
		
		int sizel = temp.left == null ? 0:size(temp.left);
		int sizer = temp.right == null? 0:size(temp.right);
		
		size = size+ sizel+ sizer;
		
		
		return size;
		
	}
	
	public static ArrayList<Integer> lca(node temp,int value) {
		ArrayList<Integer> resl= new ArrayList<>();
		ArrayList<Integer> resr= new ArrayList<>();
		ArrayList<Integer> res = new ArrayList<>();
		if(temp.data == value)
		{
			ArrayList<Integer> bres = new ArrayList<>();
			bres.add(temp.data);
			return bres;
		}
		
		if(temp.data > value)
		{
			resl = lca(temp.left,value);
			resl.add(temp.data);
			for(int i:resl)
			{
				res.add(i);
			}

		}else if(temp.data < value)
		{
			resr = lca(temp.right,value);
			resr.add(temp.data);
			for(int i : resr)
			{
				res.add(i);
			}
		}

		return res;
		
	}
	
	 static ArrayList<Integer> boom = new ArrayList<>();
	
	public static void printInRange(node temp,int min,int max)
	{
		if(temp == null)
		{
			return;
		}
		if(temp.data >= min && temp.data <= max)
		{
			boom.add(temp.data);
//			System.out.println(temp.data);
		}
		
		printInRange(temp.left,min,max);
		printInRange(temp.right,min,max);
		
		return ;
	}
	
	public static void main(String[] arar)
	{
		//binary bin = new binary();
		Scanner cin = new Scanner(System.in);
		
		int[] arr = {1,2,3,4,5,6,7,8,10};
		node root = constructor(0,arr.length-1,arr);
		display(root);
		int value = cin.nextInt();
		System.out.print("max -> "+max(root)+" min ->" + min(root)+"sum -> " + sum(root)+" find here" + find(root,value)+ "size of bst" + size(root));
		int newvalue = cin.nextInt();
		int secvalue =cin.nextInt();
//		root= addnode(root,newvalue);
//		root = remove(root,newvalue);
//		ArrayList<Integer> resultfir = lca(root,newvalue);
//		ArrayList<Integer> resultsec = lca(root,secvalue);
//		
//		int valuef=0;
//		int values = 0;
//		

//		for(int i = resultfir.size()-1,y = resultsec.size()-1 ;i>=0 || y>=0;i--,y--)
//		{
//			valuef= resultfir.get(i);
//			values= resultsec.get(y);
//			
//			if(valuef != values)
//			{
//				System.out.println(resultfir.get(i+1));
//				break;
//			}
//		}
		
		//		display(root);
		
		printInRange(root,newvalue,secvalue);
		int[] array = new int[boom.size()];
		
		for(int i = 0;i<boom.size() ;i++)
		{
			array[i]= boom.get(i);
		}
		
//		insertion helo = new insertion();
		insertion.insertion(array, array.length);
	}
	
}

//19
//50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1