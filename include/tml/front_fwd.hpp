// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/front_fwd.hpp

/** // doc: tml/front_fwd.hpp {{{
 * \file tml/front_fwd.hpp
 * \brief Forward declarations for \ref tml/front.hpp
 */ // }}}
#ifndef TML_FRONT_FWD_HPP
#define TML_FRONT_FWD_HPP

namespace tml {
template <class Tag>
  struct front_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct front;
} // end namespace tml

#endif /* TML_FRONT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
