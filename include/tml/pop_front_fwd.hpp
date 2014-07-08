// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/pop_front_fwd.hpp

/** // doc: tml/pop_front_fwd.hpp {{{
 * \file tml/pop_front_fwd.hpp
 * \brief Forward declarations for \ref tml/pop_front.hpp
 */ // }}}
#ifndef TML_POP_FRONT_FWD_HPP
#define TML_POP_FRONT_FWD_HPP

namespace tml {
template <class Tag>
  struct pop_front_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct pop_front;
} // end namespace tml

#endif /* TML_POP_FRONT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
