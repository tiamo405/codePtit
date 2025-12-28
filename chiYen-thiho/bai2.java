import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

class TheLoai {
    private String ma;
    private String ten;

    public TheLoai(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }

    public String getMa() {
        return ma;
    }

    public String getTen() {
        return ten;
    }
}

class Phim {
    private String ma;
    private String theLoai;
    private String ngay;
    private String ten;
    private int soTap;
    private int ngaySo;

    public Phim(String ma, String theLoai, String ngay, String ten, int soTap) {
        this.ma = ma;
        this.theLoai = theLoai;
        this.ngay = ngay;
        this.ten = ten;
        this.soTap = soTap;
        this.ngaySo = chuyenNgay(ngay);
    }

    private int chuyenNgay(String s) {
        String[] a = s.split("/");
        int d = Integer.parseInt(a[0]);
        int m = Integer.parseInt(a[1]);
        int y = Integer.parseInt(a[2]);
        return y * 10000 + m * 100 + d;
    }

    public int getNgaySo() {
        return ngaySo;
    }

    public String getTen() {
        return ten;
    }

    public int getSoTap() {
        return soTap;
    }

    @Override
    public String toString() {
        return ma + " " + theLoai + " " + ngay + " " + ten + " " + soTap;
    }
}

public class bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();

        HashMap<String, String> map = new HashMap<>();
        for (int i = 1; i <= n; i++) {
            String ten = sc.nextLine();
            String ma = "TL" + String.format("%03d", i);
            map.put(ma, ten);
        }

        ArrayList<Phim> list = new ArrayList<>();
        for (int i = 1; i <= m; i++) {
            String maTL = sc.nextLine();
            String ngay = sc.nextLine();
            String ten = sc.nextLine();
            int soTap = Integer.parseInt(sc.nextLine());
            String maPhim = "P" + String.format("%03d", i);
            list.add(new Phim(maPhim, map.get(maTL), ngay, ten, soTap));
        }

        Collections.sort(list, new Comparator<Phim>() {
            @Override
            public int compare(Phim o1, Phim o2) {
                if (o1.getNgaySo() != o2.getNgaySo()) {
                    return o1.getNgaySo() - o2.getNgaySo();
                }
                if (!o1.getTen().equals(o2.getTen())) {
                    return o1.getTen().compareTo(o2.getTen());
                }
                return o2.getSoTap() - o1.getSoTap();
            }
        });

        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
