package testPk;

public class cla extends subclass { //inhetace
		
	public static	int data;
		public cla(int a)
		{
			this.data=a;
		}
		protected static int valueable()
		{
			return 123;
		}
		
		public  static int add(int a,int b)
		{
			return a+b;
			
		}
		
		public  int get_value()
		{
			return data;
			
		}
		public int get() {
			
		}
		
		
		public String message() // static class cannot be called directly we have to  instance them first
		{
			return "hello fuck you java ";
			
		}
		
//		public static void main(String[] args)
//		{
//			System.out.println(add(1,2));
//		}
}