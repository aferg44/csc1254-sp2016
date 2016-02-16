BaSH
====

Just type ``sh file.sh``. If you want tomake the file executable, you can type
``chmod 755 file.sh`` and then run it with ``./file.sh`` if it is in the
current directory.  You can place any shell script in ``~/bin`` and it should
be accessible from your ``PATH`` so that you can execute it from anywhere. 


LaTeX
=====

To compile: ``pdflatex file.tex``.  To view the PDF file: ``evince file.pdf``.
Note that you need X11 forwarding to view a PDF file.  You are actually running
Evince--a Linux program--on the server, and forwarding the output to your
machine.

PHP
===

Normally you would load PHP files onto a web server, but did you know you can
run a PHP interpreter on a PHP script and generate HTML manually? Just run
``php file.php > file.html``; this creates an HTML file.  You can open that
file with ``firefox file.html``.  Indeed, this is the Firefox browser, which
you can run from the server, and even call from the command line.  Try not
to leave it open all the time (it's expensive).


Python
======

To run the interpreter, just type ``python``. To run a file, type ``python
file.py``.  The python interpreter is very useful if you want to code something
very quickly, but not necessarily save it into a file.  You can also use it
as a calculator.


Java
====

You have to compile it with ``javac File.java``. Note that the name of the file
must be the same as the name of the class. So if the you name it ``File.java``,
the class will be called ``File``.  Compiling gives you a ``File.class`` file.
To run the program, type ``java File``. 


Octave
======

To run the interpreter, just type ``octave``. To run a file, type ``octave <
file.m``.  You can also use Octave as a scientific calculator; in fact, it is
much more mature than the Python calculator because it can handle vectors and
matrices.


R
===

To run the interpreter, just type ``R``. To run a file, type ``R < file.R
--no-save``.  You can also use R as a calculator.  It is slightly better for
statistics. 


Haskell
=======

To run the interpreter, type ``ghci``. You can also compile with ``ghc
file.hs``.  Haskell debugging output is a little difficult to interpret.
