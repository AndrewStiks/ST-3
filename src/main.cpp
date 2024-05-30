// Copyright 2024 Derun Andrey
#include <iostream>

#include "TimedDoor.h"

int main() {
  int time = 5;
  TimedDoor tDoor(time);
  tDoor.lock();
  tDoor.unlock();

  return 0;
}
