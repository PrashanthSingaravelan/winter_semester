import java.io.FileOutputStream;
import java.util.Scanner;

public class file_output_stream_1 {
    public static void main(String args[]) {
        try {
            FileOutputStream fos = new FileOutputStream("sample.txt");

         Scanner sc_obj = new Scanner(System.in);
         System.out.print("Enter the text : ");
         String str1 = sc_obj.nextLine();

         fos.write(str1.getBytes());
        } catch (Exception e) {}
    }
}
