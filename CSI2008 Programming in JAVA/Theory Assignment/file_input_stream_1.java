import java.io.FileInputStream;

public class file_input_stream_1  {
  public static void main(String[] args) {
      try ( FileInputStream fin = new FileInputStream("sample.txt"))
      {
        byte b[] = new byte[fin.available()];
        fin.read(b);
        String str1 = new String(b);
        System.out.println("Your file has the data : " + str1);
       } catch (Exception e) {}
}
}
