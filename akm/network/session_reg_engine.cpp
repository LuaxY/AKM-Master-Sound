#include "akm/network/session_reg_engine.hpp"
#include "akm/network/session_client_sound.hpp"
#include "akm/master.hpp"

void akm::network::session_reg_engine::handle()
{
	std::shared_ptr<akm::network::session_client_sound> main_session = akm::master::instance().get_master_client_sound()->get_session(0);
	main_session->write(buffer.data(), size);
}