import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.time.LocalTime;

public class ClockApp extends JFrame {
    private AnalogClock analogClock;
    private JLabel digitalClock;
    private Timer timer;

    public ClockApp() {
        setTitle("Đồng Hồ - Analog & Digital Clock");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Tạo đồng hồ analog
        analogClock = new AnalogClock();
        analogClock.setPreferredSize(new Dimension(400, 400));

        // Tạo đồng hồ digital
        digitalClock = new JLabel();
        digitalClock.setFont(new Font("Arial", Font.BOLD, 24));
        digitalClock.setHorizontalAlignment(SwingConstants.CENTER);
        digitalClock.setBorder(BorderFactory.createEmptyBorder(20, 0, 20, 0));

        // Thêm các component vào frame
        add(analogClock, BorderLayout.CENTER);
        add(digitalClock, BorderLayout.SOUTH);

        // Tạo timer để cập nhật thời gian mỗi giây
        timer = new Timer(1000, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTime();
            }
        });

        // Cập nhật thời gian lần đầu và start timer
        updateTime();
        timer.start();

        // Cấu hình cửa sổ
        pack();
        setLocationRelativeTo(null);
        setResizable(false);
    }

    private void updateTime() {
        LocalTime currentTime = LocalTime.now();

        // Cập nhật đồng hồ analog
        analogClock.setTime(currentTime.getHour(), currentTime.getMinute(), currentTime.getSecond());

        // Cập nhật đồng hồ digital
        digitalClock.setText(String.format("%02d:%02d:%02d",
            currentTime.getHour(), currentTime.getMinute(), currentTime.getSecond()));
    }

    public static void main(String[] args) {
        // Thiết lập Look and Feel
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (Exception e) {
            e.printStackTrace();
        }

        // Tạo và hiển thị GUI trên Event Dispatch Thread
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new ClockApp().setVisible(true);
            }
        });
    }
}
