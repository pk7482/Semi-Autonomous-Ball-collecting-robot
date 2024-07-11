void moveForward() {
if(!goesForward)
{
goesForward=true;
motor1.run(FORWARD);
motor2.run(FORWARD);
motor3.run(FORWARD);
motor4.run(FORWARD);
for (speedSet = 0; speedSet < MAX_SPEED; speedSet +=2) // slowly bring the speed up to avoid
loading down the batteries too quickly
{
motor1.setSpeed(speedSet);
motor2.setSpeed(speedSet);
motor3.setSpeed(speedSet);
motor4.setSpeed(speedSet);
delay(5);
}
}
}
