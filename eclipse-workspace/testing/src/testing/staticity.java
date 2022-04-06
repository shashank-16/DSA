package testing;

public class staticity {
	
	  int data;
	
	 public staticity(int a)
	 {
		 data= a;
		 
	 }
	
	public void messaged()
	{
		System.out.println("trying to do static");
	}
	
	public static void setup(int a)
	{
//		data=a;
	}
	
	public  static int get_data()
	{
//		return data;
		return -1;
		
	}
	
	@Override
	
	public boolean equals(Object obj)
	{
		if(this == obj)
		{
			return true;
		}
		
		staticity other= (staticity) obj;
		
		if(this.data == other.data)
		{
			return true;
		}
		return false;
		
	}
	
}
