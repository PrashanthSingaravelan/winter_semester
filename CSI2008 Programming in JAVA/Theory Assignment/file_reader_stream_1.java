import java.io.FileReader;
import java.io.FileNotFoundException;
import java.io.IOException;

public class file_reader_stream_1 {
    public static void main(String args[]) {
        try(FileReader fr = new FileReader("sample_1.txt")) {
            int x;
            while((x=fr.read())!=-1) {
                System.out.print((char)x);
            }
        } catch(FileNotFoundException e ) {}     catch(IOException e ) {}
    }
}
