Doxygen Documentation Generator
===============================

First, run ``doxygen`` to generate a template configuration file to be used for
making the documentation later.

   ``doxygen -g config``

Then edit the line with variable ``JAVADOC_AUTOBRIEF`` to make sure it reads:

   ``JAVADOC_AUTOBRIEF = YES``

Finally, run ``doxygen`` on your configuration file to generate the documentation:

   ``doxygen config``

This will generate documentation according to the configuration file. Before
you submit your assignment, remove the file ``doxygen-sqlite3.db``. This file
is actually a SQLite3 database (something we won't be using).

   ``rm doxygen-sqlite3.db``

You can browse through the HTML documentation using a text-based browser called
``elinks``. Change into the ``html`` directory first, then run ``elinks`` on the
file ``index.html``.

   ``cd html/``
   ``elinks index.html``
