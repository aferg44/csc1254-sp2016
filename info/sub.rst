=========================
How to Submit Assignments
=========================

For any given assignment, where the assignment number is N (for example, 10,
20, 11, 21, ...), create a folder called progN in your home directory, then
place all your codes within that directory.  For example, for prog10, create a
folder prog10 to put your codes into.

Note that if you create subdirectories within prog10/, their contents will not
be copied. Anything else placed within the prog10/ directory will be copied.

To submit progN, first cd into your home directory (you may use cd without any
arguments), then run the command

 ~cs1254_cas/bin/p_copy N

For example, if you are submitting prog10, run

 ~cs1254_cas/bin/p_copy 10

and the files will be submitted. Each submission receives a timestamp. The
timestamp will always reflect your *last* submission. Thus if you wish to
earn extra credit for submitting ahead of time, only your latest submission
will be counted. 

Note that there is a script which can verify whether or not you submitted
(~cs1254_cas/bin/verify); however if it is run, it will alter the timestamp on
your submission to the time at which the verify command is run.
