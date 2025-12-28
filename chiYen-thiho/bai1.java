import java.io.File;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.TreeSet;

public class bai1 {
    public static void main(String[] args) throws Exception {
        String tenFile = "DATA.in";
        File fileDauVao = new File(tenFile);
        Scanner scanner = new Scanner(fileDauVao);
        TreeSet<BigInteger> set = new TreeSet<>();

        while (scanner.hasNext()) {
            String s = scanner.next();
            set.add(new BigInteger(s));
        }

        for (BigInteger x : set) {
            System.out.println(x);
        }

        scanner.close();
    }
}
