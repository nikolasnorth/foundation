#pragma once

namespace fdn {

class Server {
 private:
  int x_;

 public:
  explicit Server(int x);

  [[nodiscard]] auto GetX() const -> int;
};

}  // namespace fdn
