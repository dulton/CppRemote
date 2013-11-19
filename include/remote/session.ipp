// Copyright 2013 Ng Kwan Ti <ngkwanti -at- gmail.com>
//
// This file is distributed under GPL v3 license. You can redistribute it and/or
// modify it under the terms of the GNU General Public License version 3 as
// published by the Free Software Foundation. See <http://www.gnu.org/licenses/>.
//
// See www.cppremote.com for documentation.
//-----------------------------------------------------------------------------
#ifndef REMOTE_SESSION_IPP__
#define REMOTE_SESSION_IPP__

#include <remote/detail/proxy_pool.hpp>
#include <remote/detail/comm_link.hpp>


namespace remote
{

template<typename Proxy>
boost::shared_ptr<Proxy> session::get(std::string const& name, bool cache)
{
	return m_link->get_proxy_pool().get<Proxy>(detail::shared_tag(), name, cache);
}

template<typename Proxy>
Proxy* session::get_raw(std::string const& name, bool cache)
{
	return m_link->get_proxy_pool().get<Proxy>(detail::raw_tag(), name, cache);
}

template<typename Proxy>
void session::release(Proxy* _proxy)
{
	m_link->get_proxy_pool().release(_proxy);
}

}

#endif