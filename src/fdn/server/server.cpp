#include "server.h"

namespace fdn {

Server::Server(int x) : x_(x) {}

auto Server::GetX() const -> int { return x_; }

}  // namespace fdn
