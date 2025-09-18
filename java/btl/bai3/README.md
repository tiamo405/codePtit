# Chương trình Đồng Hồ Java Swing

## Mô tả
Chương trình hiển thị hai loại đồng hồ:
1. **Đồng hồ Analog**: Có 3 kim (giờ, phút, giây) với các số 3, 6, 9, 12
2. **Đồng hồ Digital**: Hiển thị thời gian định dạng 24h (HH:MM:SS)

## Cấu trúc File
- `ClockApp.java`: Class chính chứa main method và GUI
- `AnalogClock.java`: Class vẽ đồng hồ analog với các kim

## Yêu cầu hệ thống
- Java Development Kit (JDK) 8 trở lên
- Hệ điều hành: Windows, macOS, Linux

## Hướng dẫn Setup và Chạy

### 1. Kiểm tra Java
Mở terminal/command prompt và kiểm tra Java đã được cài đặt:
```bash
java -version
javac -version
```

### 2. Biên dịch chương trình
Trong thư mục chứa code, chạy lệnh:
```bash
javac *.java
```

### 3. Chạy chương trình
```bash
java ClockApp
```

## Xử lý lỗi thường gặp

### Lỗi UnsupportedClassVersionError
Nếu gặp lỗi: `UnsupportedClassVersionError: ClockApp has been compiled by a more recent version...`

**Nguyên nhân:** Code được biên dịch bằng phiên bản Java cao hơn phiên bản runtime

**Cách khắc phục:**
```bash
# Xóa file .class cũ
rm -f *.class

# Biên dịch lại bằng Java 17 (nếu có xung đột phiên bản)
/usr/lib/jvm/java-17-openjdk-amd64/bin/javac *.java

# Chạy chương trình bằng Java 17
/usr/lib/jvm/java-17-openjdk-amd64/bin/java ClockApp

# Hoặc đơn giản hơn (nếu không có xung đột)
javac *.java
java ClockApp
```

## Tính năng
- Đồng hồ analog với:
  - Kim giờ (màu đen, ngắn)
  - Kim phút (màu xanh dương, trung bình)
  - Kim giây (màu đỏ, dài)
  - Các số 12, 3, 6, 9
  - Vạch chỉ giờ và phút
- Đồng hồ digital cập nhật mỗi giây
- Giao diện thân thiện, dễ nhìn

## Lưu ý
- Chương trình tự động cập nhật thời gian theo hệ thống
- Đồng hồ analog hiển thị định dạng 12h
- Đồng hồ digital hiển thị định dạng 24h
- Có thể đóng chương trình bằng cách nhấn X trên cửa sổ
