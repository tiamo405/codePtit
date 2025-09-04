package javathi;
import java.util.Scanner;
import java.util.ArrayList;

class User {
    private String username;
    private String password;
    
    public User(String username, String password) {
        this.username = username;
        this.password = password;
    }
    
    public String getUsername() {
        return username;
    }
    
    public String getPassword() {
        return password;
    }
    
    public boolean login(String inputUsername, String inputPassword) {
        return this.username.equals(inputUsername) && this.password.equals(inputPassword);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine(); 
        
        ArrayList<User> users = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();
            String[] parts = line.split(" ");
            String username = parts[0];
            String password = parts[1];
            users.add(new User(username, password));
        }
        
        int m = sc.nextInt();
        sc.nextLine(); 
        
        int[] loginCount = new int[n];
        
        for (int i = 0; i < m; i++) {
            String line = sc.nextLine();
            String[] parts = line.split(" ");
            String inputUsername = parts[0];
            String inputPassword = parts[1];
            
            for (int j = 0; j < n; j++) {
                if (users.get(j).login(inputUsername, inputPassword)) {
                    loginCount[j]++;
                    break; 
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(loginCount[i]);
            if (i < n - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
        
        sc.close();
    }
}
