Sole idea is to just save a lot of information realate to the customer's box in the Database which  is created by files on linux enviorment
I'm using C because that's what i know 

It needs to be a helping hand for me. By keeping the information of the box, the clientControl must find out ways to
-> reach/breach machine 
-> find out problems 

Stage 1
=======

Take info from the user:
ip
ssh-port
password(s)
problem
problem tags 




I'm doing this step, because i'm interested in a filesystem heirarchy 




Can be a daemon to do fast access.
Just read all the info at once. Which will be reduce the 
numbers of file reads/writes.
I mean buffered write


stage 1.5
==========
The database will be different. A different microservice.
We will not create it, instead I'll use a pre-available one 
Could be SQL based or noSQL based.(we will decide)

The front-end using cli maybe or something else



In parallel as soon as the program gets the required info,
it will run some scripts in parallel(or sequentialy) as
instructed by the user.
like parallel NMAP
like parallel log dumping
like running a parallel scripts for specific  S/W version
like diagnosis scripts
etc





