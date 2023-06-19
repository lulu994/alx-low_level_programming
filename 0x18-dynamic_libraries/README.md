# 0x18. C - Dynamic libraries

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
	<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
	<li>What are the differences between static and shared libraries</li>
	<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/FrHmqtTW-frrOt0yf2blOw" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
	<li><a href="/rltoken/Zj0XtgNWUQyEYuABr47p8Q" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
	<li><a href="/rltoken/NnmQ5eohod3BpT3r0cFlRA" title="Technical Writing" target="_blank">Technical Writing</a></li>
</ol>

## INTRODUCTION TO FILES 

0.	[**libdynamic.so**:](#libdynamicso)Create the dynamic library <code>libdynamic.so</code> containing all the functions listed. Don’t forget to push your main.h file in your repository, containing at least all the prototypes.
1.	[**1-create_dynamic_lib.sh**:](#1-create_dynamic_libsh) Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.
2.	[**100-operations.so**:](#100-operationsso) I know, you’re missing C when coding in Python. So let’s fix that!Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
3.      [**101-make_me_win.sh**:](#101-make_me_winsh) I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
