// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/and.hpp

/** // doc: tml/integral_c/aux_/and.hpp {{{
 * \file tml/integral_c/aux_/and.hpp
 * \todo Write documentation
 */ // }}}
# ifndef TML_INTEGRAL_C_AUX_AND_HPP
# define TML_INTEGRAL_C_AUX_AND_HPP

#define AUX862492_OP &&
#define AUX862492_OP_NAME and_
#define AUX862492_OP_IMPL_NAME and_impl
#define AUX862492_OP_FWD_HEADER <tml/and_fwd.hpp>
#define AUX862492_OP_VALUE_TYPE bool
#define AUX862492_OP_ARG_VALUE(arg) arg::type::value

#include <tml/integral_c/aux_/num_op.hpp>

#endif /* TML_INTEGRAL_C_AUX_AND_HPP */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
