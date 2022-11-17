..
  Copyright 1988-2022 Free Software Foundation, Inc.
  This is part of the GCC manual.
  For copying conditions, see the copyright.rst file.

.. _libjava-tests:

The Java Library Testsuites
***************************

Runtime tests are executed via :samp:`make check` in the
:samp:`{target}/libjava/testsuite` directory in the build
tree.  Additional runtime tests can be checked into this testsuite.

Regression testing of the core packages in libgcj is also covered by the
Mauve testsuite.  The `Mauve Project <http://sourceware.org/mauve/>`_
develops tests for the Java Class Libraries.  These tests are run as part
of libgcj testing by placing the Mauve tree within the libjava testsuite
sources at :samp:`libjava/testsuite/libjava.mauve/mauve`, or by specifying
the location of that tree when invoking :samp:`make`, as in
:samp:`make MAUVEDIR=~/mauve check`.

To detect regressions, a mechanism in :samp:`mauve.exp` compares the
failures for a test run against the list of expected failures in
:samp:`libjava/testsuite/libjava.mauve/xfails` from the source hierarchy.
Update this file when adding new failing tests to Mauve, or when fixing
bugs in libgcj that had caused Mauve test failures.

We encourage developers to contribute test cases to Mauve.
