import java.io.FileOutputStream;
import java.util.Scanner;

public class file_output_stream_2 {
  public static void main(String[] args) {
            try {
              FileOutputStream fos = new FileOutputStream("F:/2) Second Year 2020-2021/"
    + "Winter_Semester_2021/CSI2008 Programming in JAVA/Theory Assignment/sample_2.txt");

    System.out.print("Enter the text : ");
    Scanner sc_obj = new Scanner(System.in);
    String str1 = sc_obj.nextLine();
    byte b[] = str1.getBytes();

    for(byte x:b) { fos.write(x);    }
  } catch (Exception e) {}
  }
}
