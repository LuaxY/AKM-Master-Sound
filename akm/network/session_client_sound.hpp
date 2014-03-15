#ifndef SESSION_CLIENT_SOUND_HPP
#define SESSION_CLIENT_SOUND_HPP

#include "akm/network/session.hpp"

namespace akm {
namespace network {

class session_client_sound : public session
{
public:
	session_client_sound(boost::asio::ip::tcp::socket _socket) :
		session(std::move(_socket), "SOUND")
	{}

private:
	void handle();
};

} // namespace network
} // namespace akm

#endif // SESSION_CLIENT_SOUND_HPP