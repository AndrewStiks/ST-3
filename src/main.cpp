// Copyright 2024 Derun Andrey
#include <iostream>

#include "TimedDoor.h"


int main() {
  TimedDoor tDoor(5);
  tDoor.lock();
  tDoor.unlock();

  return 0;
}
