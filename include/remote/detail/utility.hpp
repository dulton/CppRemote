// Copyright 2013 Ng Kwan Ti <ngkwanti -at- gmail.com>
//
// This file is distributed under GPL v2 license. You can redistribute it and/or
// modify it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation. See <http://www.gnu.org/licenses/>.
//
// See www.cppremote.com for documentation.
//-----------------------------------------------------------------------------
#ifndef __REMOTE_DETAIL_UTILITY_HPP__
#define __REMOTE_DETAIL_UTILITY_HPP__


namespace remote
{
namespace detail
{

struct null_deleter
{
	void operator () (void const*) const {}
};

}
}



#endif
