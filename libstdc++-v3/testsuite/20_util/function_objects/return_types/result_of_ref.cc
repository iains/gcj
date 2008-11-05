// { dg-options "-std=gnu++0x" }
// Copyright (C) 2008 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// 20.6.4 function object return types [func.ret]
#include <functional>
#include <testsuite_hooks.h>

struct X
{
    int operator()(int&);
    float operator()(int&&);
};

void test01()
{
  bool test __attribute__((unused)) = true;

  using std::result_of;
  using std::is_same;

  typedef int (*func_ptr)(int&);

  VERIFY((is_same<result_of<X(int)>::type, float>::value));
  VERIFY((is_same<result_of<X(int&)>::type, int>::value));
  VERIFY((is_same<result_of<X(int&&)>::type, float>::value));
  VERIFY((is_same<result_of<func_ptr(int&)>::type, int>::value));
}

int main()
{
  test01();
  return 0;
}
