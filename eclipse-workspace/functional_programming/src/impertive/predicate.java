package impertive;

import java.util.function.Predicate;

public class predicate {

	public static void main(String[] adf)
	{
		boolean greaterornot= greater.test(10);
		Predicate<Integer> refre= greater;
		
		boolean refre1 = refre.test(10);
		Predicate<Integer> refre2 = refre.negate();
		
		Predicate<Integer> check= refre2.or(greater);
		
		boolean b= check.test(10);
		
		
		System.out.println(greaterornot +" "+ refre1 +" " + " " + b );
	}
	
	static Predicate<Integer> greater = number -> (number >= 10); //boolean result and bracket or not is not necssary
	static Predicate<Integer> equal = number -> (number == 10);
//	static BiPredicate<Integer,Integer> lessthanother = boolean refre1 = refre.test(10);
}
