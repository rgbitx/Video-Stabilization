//Copyright (c) 2009 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_LA_CUSTOM_VECTOR_MINUS_VECTOR_3_HPP_INCLUDED
#define BOOST_LA_CUSTOM_VECTOR_MINUS_VECTOR_3_HPP_INCLUDED

//This file was generated by a program. Do not edit manually.

#include <boost/la/config.hpp>
#include <boost/la/deduce_vector.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/static_assert.hpp>

namespace
boost
    {
    namespace
    la
        {
        template <class A,class B>
        BOOST_LA_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            vector_traits<A>::dim==3 && vector_traits<B>::dim==3,
            deduce_vector2<A,B,3> >::type
        operator-( A const & a, B const & b )
            {
            typedef typename deduce_vector2<A,B,3>::type R;
            BOOST_STATIC_ASSERT(vector_traits<R>::dim==3);
            R r;
            vector_traits<R>::template w<0>(r)=vector_traits<A>::template r<0>(a)-vector_traits<B>::template r<0>(b);
            vector_traits<R>::template w<1>(r)=vector_traits<A>::template r<1>(a)-vector_traits<B>::template r<1>(b);
            vector_traits<R>::template w<2>(r)=vector_traits<A>::template r<2>(a)-vector_traits<B>::template r<2>(b);
            return r;
            }

        namespace
        la_detail
            {
            template <int D>
            struct vector_minus_vector_defined;

            template <>
            struct
            vector_minus_vector_defined<3>
                {
                static bool const value=true;
                };
            }
        }
    }

#endif