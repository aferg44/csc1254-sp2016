
Imagine drawing a circle perfectly circumscribed inside of a box. If the length
of one edge of the box is 2, then the diameter of the circle is 2 and so the
radius is 1.

The area of the quarter-circle in the first quadrant is a_c = pi/4*r^2. But if
r=1, it is pi/4.  The area of the box in the first quadrant is a_b = 1.  Thus 
       
  pi = 4*a_c/a_b = 4*(pi/4)/1 = pi.

.. raw::
   +-------------------------------------------------------------+
   |                     *******************        x            |
   |               ******         |         ******       x       |
   |           ****               |     x         ****      x    |
   |        ***                   |           x       ***        |
   |     ***                      |                      ***     |
   |    *                         |   x          x          *    |
   |   *                          |         x          x     *   |
   |  *                           |              x            *  |
   | *                            |     x                      * |
   | *                            +----------------------------* |
   | *                                                         * |
   |  *                                                       *  |
   |   *                                                     *   |
   |    *                                                   *    |
   |     ***                                             ***     |
   |        ***                                       ***        |
   |           ****                               ****           |
   |               ******                   ******               |
   |                     *******************                     |
   +-------------------------------------------------------------+

We may approximate a_c/a_b by throwing darts in the first quadrant and counting
the number of darts which fall inside the quarter-circle.  To throw 1000 darts,
we may execute the following algorithm:
.. raw::
  let inside=0;
  for i=0 to 1000
    let x be a random number [0,1]
    let y be a random number [0,1]
    if sqrt(x*x + y*y) < 1
      let inside = inside +1

Then the value 4.0*inside/1000.0 should approximate pi.  Thus we use a method
whereby we randomly generate coordinates (darts), throw them at the first
quadrant, count the number which fall inside to approximate the ratio of areas,
then use this approximation to get pi.
