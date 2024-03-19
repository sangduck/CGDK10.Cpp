//*****************************************************************************
//*                                                                           *
//*                      Cho sanghyun's Game Classes II                       *
//*                       Ver 10.0 / Release 2019.12.11                       *
//*                                                                           *
//*                          network socket classes                           *
//*                                                                           *
//*                                                                           *
//*                                                                           *
//*                                                                           *
//*  This Program is programmed by Cho SangHyun. sangduck@cgcii.co.kr         *
//*  Best for Game Developement and Optimized for Game Developement.          *
//*                                                                           *
//*                (c) 2003. Cho Sanghyun. All right reserved.                *
//*                          http://www.CGCII.co.kr                           *
//*                                                                           *
//*****************************************************************************

#pragma once

namespace CGDK
{
//-----------------------------------------------------------------------------
//
// net::socket::udp_resend
//
// 1. concept
//    - resendable udp socket
//
// 2. usage
//    1)
//
// 3. caution
//    1) 
//
//
//-----------------------------------------------------------------------------
class net::socket::udp_resend : 
	public						net::io::socket::Nudp,
	public						net::io::binder::Nudp,
	public						net::io::sendable::Nudp,
	public						net::io::Nudp_resend,
	public						net::io::sender::Ndatagram,
	public						net::io::receivable::Ndatagram,
	public						net::io::messageable::Nbase
{
public:
			udp_resend() {}
			udp_resend(std::string_view _name) : net::io::binder::Nudp{ _name } {}
};


}