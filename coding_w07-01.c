#include <stdio.h>

int main() { 
    float score;
    float final_score;// ประกาศตัวแปรสำหรับเก็บคะแนน

    // รับคะแนนจากผู้ใช้
    printf("Please enter your midterm score: ");
    scanf("%f", &score);// อ่านค่าคะแนนและเก็บไว้ในตัวแปร score

    // ตรวจสอบเงื่อนไขและคำนวณคะแนน
    if (score >= 50) {// ถ้าคะแนนมากกว่าหรือเท่ากับ 50
        final_score = score + (score * 0.05);// เพิ่มคะแนน 5%
    } else {
        final_score = score;// ไม่เพิ่มคะแนน
    }

    // แสดงผลลัพธ์
    printf("Final score: %.2f\n", final_score);// แสดงคะแนนสุดท้าย
    printf("End of evaluation\n");// แสดงข้อความสิ้นสุดการประเมินผล

    return 0;// คืนค่า 0 เพื่อบ่งชี้ว่าการทำงานสำเร็จ
}
