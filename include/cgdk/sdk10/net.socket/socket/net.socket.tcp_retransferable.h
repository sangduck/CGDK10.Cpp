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
// net::socket::tcp_restorable
//
// ----------------------------------------------------------------------------
template <class TRESTORABLE, class RECEIVE_HEADER_T = uint32_t, class SEND_HEADER_T = RECEIVE_HEADER_T>
class net::socket::tcp_restorable :
	public						net::io::socket::tcp::Ndefault,
	public						net::io::sendable::tcp::Ndefault,
	public				 		net::io::send_request::tcp::Ndefault,
	public						net::io::sender::tcp::Ndefault<SEND_HEADER_T>,
	public						net::io::receivable::tcp::Ndefault,
	public						net::io::packetable::tcp::Ndefault<RECEIVE_HEADER_T>,
	public						net::io::Nrestore_server<TRESTORABLE>
{
};


}