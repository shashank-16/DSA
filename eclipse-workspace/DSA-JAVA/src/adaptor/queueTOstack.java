package adaptor;
import java.io.*;
import java.util.*;

public class queueTOstack {
	public static class QueueToStackAdapter {
	    Queue<Integer> mainQ;
	    Queue<Integer> helperQ;

	    public QueueToStackAdapter() {
	      mainQ = new ArrayDeque<>();
	      helperQ = new ArrayDeque<>();
	    }

	    int size() {
	      return  mainQ.size();
	    }

	    void push(int val) {
	      mainQ.add(val);
	    }

	    int pop() {
	      if(mainQ.size() == 0)
	      {
	        System.out.print("Stack underflow");
	        return 0;
	      }
	      else{
	          int top=mainQ.peek();
	        while(true)
	        {
	          if(mainQ.size() != 1)
	          {
	            helperQ.add(mainQ.remove());
	            
	          }
	          else{
	             top=mainQ.peek();

	            mainQ.remove();
	            break;
	          }

	        }

	        while(true)
	        {
	          if(helperQ.size()!=0)
	          {
	            mainQ.add(helperQ.remove());
	          }
	          else{
	            break;
	          }
	        }

	          return top;
	      }
	    }

	    int top() {
	      int top= 0;
	      if(mainQ.size() == 0 )
	      {
	        System.out.print("Stack overflow");
	      }
	      else{
	        while(true)
	        {
	          if(mainQ.size() != 1)
	          {
	            helperQ.add(mainQ.remove());
	          }
	          else{
	            top=mainQ.peek();
	            helperQ.add(mainQ.remove());
	            break;
	          }

	        }

	        while(true)
	        {
	          if(helperQ.size() != 0)
	          {
	            mainQ.add(helperQ.remove());
	          }
	          else{
	            break;
	          }
	        }
	      }

	      return top;
	    }
	  }

	  public static void main(String[] args) throws Exception {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    QueueToStackAdapter st = new QueueToStackAdapter();

	    String str = br.readLine();
	    while (str.equals("quit") == false) {
	      if (str.startsWith("push")) {
	        int val = Integer.parseInt(str.split(" ")[1]);
	        st.push(val);
	      } else if (str.startsWith("pop")) {
	        int val = st.pop();
	        if (val != -1) {
	          System.out.println(val);
	        }
	      } else if (str.startsWith("top")) {
	        int val = st.top();
	        if (val != -1) {
	          System.out.println(val);
	        }
	      } else if (str.startsWith("size")) {
	        System.out.println(st.size());
	      }
	      str = br.readLine();
	    }
	  }
}
