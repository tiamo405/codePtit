import javax.swing.*;
import java.awt.*;
import java.awt.geom.Line2D;

public class AnalogClock extends JPanel {
    private int hours = 0;
    private int minutes = 0;
    private int seconds = 0;

    public AnalogClock() {
        setBackground(Color.WHITE);
    }

    public void setTime(int hours, int minutes, int seconds) {
        this.hours = hours % 12; // Chuyển về định dạng 12h cho đồng hồ analog
        this.minutes = minutes;
        this.seconds = seconds;
        repaint(); // Vẽ lại đồng hồ
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

        int width = getWidth();
        int height = getHeight();
        int centerX = width / 2;
        int centerY = height / 2;
        int radius = Math.min(width, height) / 2 - 20;

        // Vẽ viền đồng hồ
        g2d.setColor(Color.BLACK);
        g2d.setStroke(new BasicStroke(3));
        g2d.drawOval(centerX - radius, centerY - radius, radius * 2, radius * 2);

        // Vẽ các số 12, 3, 6, 9
        g2d.setFont(new Font("Arial", Font.BOLD, 24));
        FontMetrics fm = g2d.getFontMetrics();

        // Số 12 (trên)
        String twelve = "12";
        int textWidth = fm.stringWidth(twelve);
        g2d.drawString(twelve, centerX - textWidth/2, centerY - radius + 30);

        // Số 3 (phải)
        String three = "3";
        textWidth = fm.stringWidth(three);
        g2d.drawString(three, centerX + radius - 25, centerY + fm.getHeight()/2 - 5);

        // Số 6 (dưới)
        String six = "6";
        textWidth = fm.stringWidth(six);
        g2d.drawString(six, centerX - textWidth/2, centerY + radius - 10);

        // Số 9 (trái)
        String nine = "9";
        textWidth = fm.stringWidth(nine);
        g2d.drawString(nine, centerX - radius + 15, centerY + fm.getHeight()/2 - 5);

        // Vẽ các vạch chỉ giờ (12 vạch)
        g2d.setStroke(new BasicStroke(2));
        for (int i = 0; i < 12; i++) {
            double angle = Math.toRadians(i * 30 - 90); // -90 để bắt đầu từ 12h
            int x1 = centerX + (int)(radius * 0.9 * Math.cos(angle));
            int y1 = centerY + (int)(radius * 0.9 * Math.sin(angle));
            int x2 = centerX + (int)(radius * 0.8 * Math.cos(angle));
            int y2 = centerY + (int)(radius * 0.8 * Math.sin(angle));
            g2d.drawLine(x1, y1, x2, y2);
        }

        // Vẽ các vạch chỉ phút (60 vạch nhỏ)
        g2d.setStroke(new BasicStroke(1));
        for (int i = 0; i < 60; i++) {
            if (i % 5 != 0) { // Bỏ qua vạch giờ
                double angle = Math.toRadians(i * 6 - 90);
                int x1 = centerX + (int)(radius * 0.95 * Math.cos(angle));
                int y1 = centerY + (int)(radius * 0.95 * Math.sin(angle));
                int x2 = centerX + (int)(radius * 0.9 * Math.cos(angle));
                int y2 = centerY + (int)(radius * 0.9 * Math.sin(angle));
                g2d.drawLine(x1, y1, x2, y2);
            }
        }

        // Vẽ kim giờ
        g2d.setColor(Color.BLACK);
        g2d.setStroke(new BasicStroke(4));
        double hourAngle = Math.toRadians((hours * 30 + minutes * 0.5) - 90);
        int hourX = centerX + (int)(radius * 0.5 * Math.cos(hourAngle));
        int hourY = centerY + (int)(radius * 0.5 * Math.sin(hourAngle));
        g2d.drawLine(centerX, centerY, hourX, hourY);

        // Vẽ kim phút
        g2d.setColor(Color.BLUE);
        g2d.setStroke(new BasicStroke(3));
        double minuteAngle = Math.toRadians((minutes * 6) - 90);
        int minuteX = centerX + (int)(radius * 0.7 * Math.cos(minuteAngle));
        int minuteY = centerY + (int)(radius * 0.7 * Math.sin(minuteAngle));
        g2d.drawLine(centerX, centerY, minuteX, minuteY);

        // Vẽ kim giây
        g2d.setColor(Color.RED);
        g2d.setStroke(new BasicStroke(1));
        double secondAngle = Math.toRadians((seconds * 6) - 90);
        int secondX = centerX + (int)(radius * 0.8 * Math.cos(secondAngle));
        int secondY = centerY + (int)(radius * 0.8 * Math.sin(secondAngle));
        g2d.drawLine(centerX, centerY, secondX, secondY);

        // Vẽ chấm tròn ở giữa
        g2d.setColor(Color.BLACK);
        g2d.fillOval(centerX - 5, centerY - 5, 10, 10);
    }
}
