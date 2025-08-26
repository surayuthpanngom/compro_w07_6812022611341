#include <stdio.h>

int main() {
    float score;
    float final_score;

    // รับคะแนนจากผู้ใช้
    printf("Please enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไขและคำนวณคะแนน
    if (score >= 50) {
        final_score = score + (score * 0.05);
    } else {
        final_score = score;
    }

    // แสดงผลลัพธ์
    printf("Final score: %.2f\n", final_score);
    printf("End of evaluation\n");

    return 0;
}
