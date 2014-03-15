#include "akm/network/session_client_sound.hpp"
#include "akm/network/session_reg_engine.hpp"
#include "akm/master.hpp"

void akm::network::session_client_sound::handle()
{
	std::shared_ptr<akm::network::session_reg_engine> main_session = akm::master::instance().get_master_reg_engine()->get_session(0);
	main_session->write(buffer.data(), size);
}