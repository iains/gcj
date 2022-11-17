..
  Copyright 1988-2022 Free Software Foundation, Inc.
  This is part of the GCC manual.
  For copying conditions, see the copyright.rst file.

Additional testing for Java Class Libraries
*******************************************

The Java runtime tests can be executed via :samp:`make` check}
in the :samp:`{target}/libjava/testsuite` directory in
the build tree.

The `Mauve Project <http://sourceware.org/mauve/>`_ provides
a suite of tests for the Java Class Libraries.  This suite can be run
as part of libgcj testing by placing the Mauve tree within the libjava
testsuite at :samp:`libjava/testsuite/libjava.mauve/mauve`, or by
specifying the location of that tree when invoking :samp:`make`, as in
:samp:`make MAUVEDIR=~/mauve check`.