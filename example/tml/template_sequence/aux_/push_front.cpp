// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/push_front.cpp {{{
 * \file tml/template_sequence/aux_/push_front.cpp
 * \example tml/template_sequence/aux_/push_front.cpp
 * \brief Usage example for tml::push_front_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/push_front.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/push_front.hpp>

using namespace tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<short,int,float> s1;

typedef push_front<s1,char>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1, seq<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
