# 0x1A. C - Hash tables

## GENERAL

<ol>
	<li>What is a hash function</li>
	<li>What makes a good hash function</li>
	<li>What is a hash table, how do they work and how to use them</li>
	<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
	<li>What are the advantages and drawbacks of using hash tables</li>
	<li>What are the most common use cases of hash tables</li>
</ol>

## RESOURCES

#### Read or watch:

- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0&ab_channel=PaulProgramming)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
- [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

##TASKS

0.	[**0-hash_table_create.c**:](#0-hash_table_createc) Function that creates a hash table.
1.	[**1-djb2.c**:](#1-djb2c) Hash function implementing the djb2 algorithm.
2.	[**2-key_index.c**:](#2-key_indexc) Function that gives you the index of a key.
3.	[**3-hash_table_set.c**:](#3-hash_table_setc) Function that adds an element to the hash table.If you want to test for collisions, here are some strings that collide using the djb2 algorithm
4.	[**4-hash_table_get.c**:](#4-hash_table_getc) Function that retrieves a value associated with a key.
5.      [**5-hash_table_print.c**:](#5-hash_table_printc) Function that prints a hash table.
6.      [**6-hash_table_delete.c**:](#6-hash_table_deletec) Function that deletes a hash table.
7.      [**100-sorted_hash_table.c**:](#100-sorted_hash_tablec) Rewrite the previous functions using these data structures
