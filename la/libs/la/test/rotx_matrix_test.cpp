//Copyright (c) 2008-2009 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/la/rotx_matrix.hpp>
#include "test_la_matrix.hpp"
#include "gold.hpp"

namespace
	{
	template <int D>
	void
	test()
		{
		using namespace boost::la;
		for( float r=0; r<6.28f; r+=0.5f )
			{
			test_la::matrix<M1,D,D> x=rotx_matrix<D>(r);
			test_la::rotation_x(x.b,r);
			BOOST_TEST_LA_CLOSE(x.a,x.b,0.000001f);
			}
		}
	}

int
main()
	{
	test<3>();
	test<4>();
	test<5>();
    return boost::report_errors();
	}
