package lab_assignments;
import java.io.*;

interface In1
{
	void itemsinput();
	void GSTcalc();
	void totalbill();
}

class hyndai implements In1
{
	public void itemsinput()
	{
      System.out.println("hyndai i20");
	}
	public void GSTcalc()
	{
		System.out.println("25%");
	}
	public void totalbill()
	{
		System.out.println("5000000");
	}
}

class maruti implements In1
{
	public void itemsinput()
	{
      System.out.println("maruti ertiga");
	}
	public void GSTcalc()
	{
		System.out.println("45%");
	}
	public void totalbill()
	{
		System.out.println("400000");
	}
}

class benz implements In1
{
	public void itemsinput()
	{
      System.out.println("benz");
	}
	public void GSTcalc()
	{
		System.out.println("45%");
	}
	public void totalbill()
	{
		System.out.println("5000000");
	}
}

class bmw implements In1
{
	public void itemsinput()
	{
      System.out.println("bmw");
	}
	public void GSTcalc()
	{
		System.out.println("34%");
	}
	public void totalbill()
	{
		System.out.println("7000000");
	}
}

public class showroom implements In1
{
	// Driver Code
	public static void main(String[] args)
	{
		hyndai h=new hyndai();
		maruti m=new maruti();
		benz b=new benz();
		bmw bm=new bmw();
		h.itemsinput();
		h.GSTcalc();
		h.totalbill();
		m.itemsinput();
		m.GSTcalc();
		m.totalbill();
		b.itemsinput();
		b.GSTcalc();
		b.totalbill();
		bm.itemsinput();
		bm.GSTcalc();
		bm.totalbill();

	}
}
