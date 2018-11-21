#include <iostream>

#include <Math.h>

int main() {

  double x_t0 = 102.0f; // m
  double y_t0 = 65.0f; // m

  double theta_t0 = 5.0f / 8.0f * M_PI;

  double v_t0 = 110; // m/s

  double theta_dot_t0 = M_PI / 8.0f; // rad/s

  double delta_t = 0.1f; //seconds

  double x_t1 = x_t0 + v_t0 / theta_dot_t0 * (sin(theta_t0 + theta_dot_t0 * delta_t) - sin(theta_t0));

  double y_t1 = y_t0 + v_t0 / theta_dot_t0 * (-cos(theta_t0 + theta_dot_t0 * delta_t) + cos(theta_t0));

  double theta_1 = theta_t0 + theta_dot_t0 * delta_t;

  std::cout << "x       " << "y       " << "theta" << std::endl;
  std::cout << x_t1 << " " << y_t1 << " " << theta_1 << std::endl;

  return 0;

}
