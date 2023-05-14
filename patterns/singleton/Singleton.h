#pragma once

class Singleton {

public:
  static Singleton *Instance();

protected:
  Singleton() = default;

private:
  static Singleton *_instance;
};
