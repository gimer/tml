// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/sequence_fwd.hpp

/** // doc: tml/sequence_fwd.hpp {{{
 * \file tml/sequence_fwd.hpp
 * \brief Forward declarations for \ref tml/sequence.hpp
 */ // }}}
#ifndef TML_SEQUENCE_FWD_HPP
#define TML_SEQUENCE_FWD_HPP

namespace tml {
template <class... Args>
  struct sequence;
template <class T, T... Args>
  struct sequence_c;
} // end namespace tml

#endif /* TML_SEQUENCE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
