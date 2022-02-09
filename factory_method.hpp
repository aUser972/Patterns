#pragma once
#include <iostream>

struct weapon
{
  virtual ~weapon() {};
  virtual void fire() const = 0;
  virtual void recharge() const = 0;
};

struct ak_47 : public weapon
{
  void fire() const override
  {
    std::cout << "GRRRAA ak47\n";
  }
  void recharge() const override
  {
    std::cout << "Rechardge ak74\n";
  }
};

struct glock_11 : public weapon
{
    void fire() const override
  {
    std::cout << "GRRRAA glock 11\n";
  }
  void recharge() const override
  {
    std::cout << "Rechardge glock 11\n";
  }
};

struct shooter
{
  virtual ~shooter() {};
  virtual void attack(weapon* g) = 0;
};

struct arabican_shooter : public shooter
{
  void attack(weapon* g) override
  {
    std::cout << "Arabican shoot\n";
    g->fire();
    g->recharge();
  }
};

struct russian_shooter : public shooter
{
  void attack(weapon* g) override
  {
    std::cout << "Russian shoot\n";
    g->fire();
    g->recharge();
  }
};