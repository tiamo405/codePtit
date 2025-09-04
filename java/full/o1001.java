import java.util.*;

public class o1001 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // Nhập số bộ test
        while (t-- > 0) {
            int n = sc.nextInt(); // Nhập số phần tử
            int[] a = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt(); // Nhập từng phần tử
            }

            Arrays.sort(a); // Sắp xếp tăng dần

            // In kết quả
            for (int i = 0; i < n; i++) {
                System.out.print(a[i] + " ");
            }
            System.out.println(); // Xuống dòng sau mỗi bộ test
        }

    }
}