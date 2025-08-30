#include <stdio.h> 

int main() {
    int level; // ประกาศตัวแปรชนิดเต็มจำนวนสำหรับเก็บค่าระดับ
    
    // แสดงข้อความแจ้งให้ผู้ใช้ป้อนค่าระดับ (1-4)
    printf("Enter level (1-4): ");
    
    // อ่านค่าตัวเลขที่ผู้ใช้ป้อนเข้ามาและเก็บไว้ในตัวแปร 'level'
    scanf("%d", &level);
    
    // คำสั่ง switch จะตรวจสอบค่าของตัวแปร 'level'
    switch (level) {
        // กรณีที่ level มีค่าเท่ากับ 1
        case 1:
            
            printf("Beginner\n");
            //ไม่มีคำสั่ง break; ที่นี่ทำให้โปรแกรมจะทำงานต่อไปยัง case ถัดไป
        
        // กรณีที่ level มีค่าเท่ากับ 2
        case 2:
            // พิมพ์ข้อความ "Intermediate"
            printf("Intermediate\n");
            // ไม่มีคำสั่ง break; ที่นี่ทำให้โปรแกรมทำงานต่อไปยัง case ถัดไป
            
        // กรณีที่ level มีค่าเท่ากับ 3
        case 3:
            // พิมพ์ข้อความ "Advanced"
            printf("Advanced\n");
            // ไม่มีคำสั่ง break; ที่นี่จะทำให้โปรแกรมออกจากบล็อก switch
            break;
            
        // กรณีที่ level มีค่าเท่ากับ 4
        case 4:
            // พิมพ์ข้อความ "Expert"
            printf("Expert\n");
            // คำสั่ง 'break;' จะทำให้โปรแกรมออกจากบล็อก switch
            break;
            
        // กรณีเริ่มต้น (default): หากค่า level ไม่ตรงกับ case ใด ๆ เช่น 0, 5, หรือเลขติดลบ
        default:
            // พิมพ์ข้อความ "Invalid level"
            printf("Invalid level\n");
    }
    
    // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
    return 0;
}
