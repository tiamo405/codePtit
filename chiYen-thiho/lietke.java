import java.util.*;

public class lietke {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            Set<Integer> even = new TreeSet<>(); 
            Set<Integer> odd = new TreeSet<>(Collections.reverseOrder()); 
            
            for (int i = 0; i < n; i++) {
                int num = sc.nextInt();
                if (num % 2 == 0) {
                    even.add(num);
                } else {
                    odd.add(num);
                }
            }
            
            for (int num : even) {
                System.out.print(num + " ");
            }
            System.out.println();
            
            for (int num : odd) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
