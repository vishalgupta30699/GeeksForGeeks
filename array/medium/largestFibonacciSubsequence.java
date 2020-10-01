
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		int i,tc,j,a,b,n,ar[],c;
		HashMap<Integer,Integer> fab=new HashMap<Integer,Integer>();
		a=0;b=1;
		for(c=1;c<=1000;)
		{
		    c=a+b;
		    a=b;
		    b=c;
		    fab.put(c,c);
		}
		Scanner s=new Scanner(System.in);
		tc=s.nextInt();
		for(i=0;i<tc;++i)
		{
		    n=s.nextInt();
		    ar=new int[n];
		    for(j=0;j<n;++j)
		    {
		        ar[j]=s.nextInt();
		    }
		    for(j=0;j<n;++j)
		    {
		        if(fab.containsKey(ar[j])) System.out.print(ar[j]+" ");
		    }
		    System.out.print("\n");
		}
		
	}
}
