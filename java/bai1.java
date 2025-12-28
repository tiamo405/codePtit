import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class MonHoc {
    private String ma;
    private String ten;
    private String hinhThuc;

    public MonHoc(String ma, String ten, String hinhThuc) {
        this.ma = ma;
        this.ten = ten;
        this.hinhThuc = hinhThuc;
    }

    public String getMa() {
        return ma;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + hinhThuc;
    }
}

public class bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<MonHoc> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String hinhThuc = sc.nextLine();
            list.add(new MonHoc(ma, ten, hinhThuc));
        }

        Collections.sort(list, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc o1, MonHoc o2) {
                return o1.getMa().compareTo(o2.getMa());
            }
        });

        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
