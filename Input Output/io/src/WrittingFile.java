import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class WrittingFile {
    public static void main(String[] args) throws IOException {
        BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"));
        writer.write("My name is Sukanto");
        writer.close();

    }
}