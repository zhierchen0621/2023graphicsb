//碰撞偵測：Mario vs. Pikachu
//牛頓力學(1)靜者恆靜動者恆動,(2)f=m*a 位子、速度、加速度
void setup(){
  size(400,400);
}
float mario X=50,Y=50,vx=0,vy=0;
void draw(){
  background(108,137,255);
  marioX += vx;
  fill(255,0,0); ellipse(marioX,marioY,15,20);
  fill(229,119,42); rect(0,260,400,150);
 }
void keyPressesd(){
  if(keyCode==RIGHT) vx = 2;
  if(keyCode==LEFT) vx = -2;
}
