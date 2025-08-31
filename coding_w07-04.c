#include <stdio.h>
int main () {
int lavel; // ตัวเเปลเก็บค่าระดับ
printf("กรุณาป้อนค่าระดับ (1-4): "); // รับค่าตัวเเปล lavel
scanf("%d", &lavel); //อ้านค่าตัวเเปล lavel
// ใช้ if-else ตรวจสอบค่าระดับ
if (lavel == 1){
    printf("silver\n"); //กรณ๊ระดับเป็นที่ 1
}
else if (lavel == 2) {
    printf("Gold\n"); //กรณ๊ระดับเป็นที่ 2
}
else if (lavel == 3) {
    printf("platinum\n"); //กรณ๊ระดับเป็นที่ 3
}
else if (lavel == 4) {
    printf("diamond\n"); //กรณ๊ระดับเป็นที่ 4
}
else {
    printf("Invalid membership level\n"); //กรณ๊ระดับไม่ถูกต้อง
}

// ใช้ if-else ตรวจสอบค่าระดับ
if (lavel == 1) {
    printf("discount 5%%\n"); //กรณ๊ระดับเป็นที่ 1 
}
else if (lavel == 2) {
    printf("discount 10%% + Reward points\n"); //กรณ๊ระดับเป็นที่ 2
}
else if (lavel == 3) {
    printf("discount 15%% + Reward points + birthday gift\n"); //กรณ๊ระดับเป็นที่ 3
}  
else if (lavel == 4) {
    printf("ได้ครบทุกอย่าง + VIP events\n"); //กรณ๊ระดับเป็นที่ 4
}

return 0;
} 