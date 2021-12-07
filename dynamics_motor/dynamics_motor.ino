#include <DynamixelWorkbench.h>

DynamixelWorkbench dxl_wb;

void setup() {
  // put your setup code here, to run once:
  dxl_wb.begin("",1000000);
  dxl_wb.ping(1);
  dxl_wb.ping(2);
  
  dxl_wb.jointMode(1);
  dxl_wb.jointMode(2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // 좌표 0 지정
  dxl_wb.goalPosition(1, 0);
  dxl_wb.goalPosition(2, 0);
  delay(2000);
  // 이동
  dxl_wb.goalPosition(1, 2000);
  dxl_wb.goalPosition(2, 2000);
  delay(2000);
}
