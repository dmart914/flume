#include <iostream>

int main(int argc, char** argv) {

  // These variables would come from the accelerometer
  int rawX, rawY, rawZ;
  rawX = 2000; rawY = 3000; rawZ = 4000;

  // Angle: take x, y, z and figure out degrees to vertical

  // Takes in a raw accelormeter reading and converts it
  // to voltages
  float getX() {
    float rawToVoltage = .75

    return (rawX * rawToVoltage);
  }

  float getY() {
    float rawToVoltage = .75

    return (rawY * rawToVoltage);
  }

  float getZ() {
    float rawToVoltage = .75

    return (rawZ * rawToVoltage);
  }

  void printCoords(int x, int y, int z) {
    std::cout << "(";
    std::cout << getX(x) << ", ";
    std::cout << getY(y) << ", ";
    std::cout << getZ(z) << ")\n";
    return;
  }

  float calibrateX() {
    return (getX() * (-1));
  }

  float calibrateY() {
    return (getY() * (-1));
  }

  float calibrateZ() {
    return (getZ() * (-1));
  }

  float xZero, yZero, zZero;

  void calibrate() {
    xZero = calibrateX(),
    yZero = calibrateY(),
    zZero = calibrateZ();
  }

  // Stoped at PART C











  float Angle(int x, int y, int z) {


    return 0.0;
  }



  return 0;
}
