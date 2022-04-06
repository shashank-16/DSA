package impertive;

import java.util.function.*;


public class consumer {
	public static void main(String[] sdfs)
	{
		paint.accept(10);
		painttwoValue.accept(13, "shashank");
	
	}
	
	//functional consumer and suppiler
	
	static Supplier<String> getname =  ()-> "hello world"; //supplier has ()  <-- these
	
	static Consumer<Integer> paint= number -> System.out.println(number); // no return 
	static BiConsumer<Integer,String> painttwoValue= (number,number1) -> System.out.print(number + "  " + number1 );
	
	
}
