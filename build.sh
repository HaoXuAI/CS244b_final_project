sudo yum update

# gmp
sudo yum install gmp-devel

# libtool
sudo yum install libtool


# compile library
cd sfslite-1.2
mkdir install
export SFSHOME=`pwd`
./configure --prefix=$SFSHOME/install
make
make install
cd ..
ln -s sfslite-1.2/install sfs
ln -s /usr/lib gmp
cd libbyz
makedepend
make clobber
make
cd ..

To compile a simple BFT test program
// make sure libbyz was compiled with 'BASE' *undefined* in State_defs.h
cd bft-simple
makedepend
make clobber
make
ln -s ../config .
ln -s ../config_private .
cd ..

:'
How to run
----------

Edit the config file to match your environment. The following is an
example config file:

generic
1
15000000
5
234.5.6.8 80
ip-172-31-1-74.us-west-1.compute.internal 13.57.32.246 80 bfaa873efc926cb91646a89e45f96582041e3eed35cde0ef60b5c006cfad883781ee807411b0df3c74dc3ebbbce59c21d67711c83ecf596357c23dba33da338fb5577179a3b6188c59590aa1301eb852c0e14fa9225c0b377fee944eb9fa110ad7a316269e4b13b153887426a347c7c3c5feb1e3107bac4c6e29327b3343c405
ip-172-31-4-44.us-west-1.compute.internal 54.193.27.25 80 bfaa873efc926cb91646a89e45f96582041e3eed35cde0ef60b5c006cfad883781ee807411b0df3c74dc3ebbbce59c21d67711c83ecf596357c23dba33da338fb5577179a3b6188c59590aa1301eb852c0e14fa9225c0b377fee944eb9fa110ad7a316269e4b13b153887426a347c7c3c5feb1e3107bac4c6e29327b3343c405
ip-172-31-5-155.us-west-1.compute.internal 52.53.168.124 80 bfaa873efc926cb91646a89e45f96582041e3eed35cde0ef60b5c006cfad883781ee807411b0df3c74dc3ebbbce59c21d67711c83ecf596357c23dba33da338fb5577179a3b6188c59590aa1301eb852c0e14fa9225c0b377fee944eb9fa110ad7a316269e4b13b153887426a347c7c3c5feb1e3107bac4c6e29327b3343c405
ip-172-31-15-153.us-west-1.compute.internal 54.183.251.79 80 bfaa873efc926cb91646a89e45f96582041e3eed35cde0ef60b5c006cfad883781ee807411b0df3c74dc3ebbbce59c21d67711c83ecf596357c23dba33da338fb5577179a3b6188c59590aa1301eb852c0e14fa9225c0b377fee944eb9fa110ad7a316269e4b13b153887426a347c7c3c5feb1e3107bac4c6e29327b3343c405
ip-172-31-8-111.us-west-1.compute.internal 54.153.73.247 80 bfaa873efc926cb91646a89e45f96582041e3eed35cde0ef60b5c006cfad883781ee807411b0df3c74dc3ebbbce59c21d67711c83ecf596357c23dba33da338fb5577179a3b6188c59590aa1301eb852c0e14fa9225c0b377fee944eb9fa110ad7a316269e4b13b153887426a347c7c3c5feb1e3107bac4c6e29327b3343c405
5000
150
9999250000
// The format is:
// Service name
// Maximum number of faults that can be tolerated (f)
// Period between key changes (ms)
// Number of principals (excluding group)
// IP multicast group address and port
// DNS_name IP_address port public_key_base16
// .... (x Number of principals)
// Then the replica specific portion:
// view change timeout (ms)
// status timeout for retransmissions (ms)
// watchdog timeout (ms)


The first 3f+1 machines in the config file are the replicas (here f is
in the second line in the file). The remaining principals can be used
as clients. You need to replace names and IP addresses of the machines
to match your environment.

There is also a configuration file with a matching private key.
We supply a set of files that match the example above:

d3bf9ada150474e93d21a4818ccf40e97df94f565c0528973a7799fc3e9ee69e0561fff15631850e2c5b8f9accee851cfc170cd0193052d4f75dfee18ab1d24b e7b8885fa504355a686140181ae956e726e490ac2f905e52a78bea2ef16acef31788b827f35f0de1343766e6f2cbe44f436d7e5eceeb67791ccd296422fb50ef

You can use SFS to generate more keys.

By default, the programs in this distribution assume the config file
is in a file named "./config" and the file with the private keys is in
a file named "./config_private/full.dns.machine.name".  But there are
command line options to change these.


How to run simple (now called simple-bft):
------------------

After you have these files and you have built the code in simple, you
can start "server" in the replica machines. Then you can start client
in the client machine/s. The clients will run for a while and print a
message saying how long it took to execute a series of operations.

'


