/****************************** Installation of NS3 ***********************************/

	$ sudo update

//Requierments
	$ sudo apt install g++ python3 python3-dev pkg-config sqlite3 cmake python3-setuptools git qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools gir1.2-goocanvas-2.0 python3-gi python3-gi-cairo python3-pygraphviz gir1.2-gtk-3.0 ipython3 openmpi-bin openmpi-common openmpi-doc libopenmpi-dev autoconf cvs bzr unrar gsl-bin libgsl-dev libgslcblas0 wireshark tcpdump sqlite sqlite3 libsqlite3-dev  libxml2 libxml2-dev libc6-dev libc6-dev-i386 libclang-dev llvm-dev automake python3-pip libxml2 libxml2-dev libboost-all-dev 

	$ sudo apt-get install gcc g++ python python-dev mercurial bzr gdb valgrind gsl-bin libgsl0-dev libgsl0ldbl flex bison tcpdump sqlite sqlite3 libsqlite3-dev libxml2 libxml2-dev libgtk2.0-0 libgtk2.0-dev uncrustify doxygen graphviz imagemagick texlive texlive-latex-extra texlive-generic-extra texlive-generic-recommended texinfo dia texlive texlive-latex-extra texlive-extra-utils texlive-generic-recommended texi2html python-pygraphviz python-kiwi python-pygoocanvas libgoocanvas-dev python-pygccxml 

//Download the zip file of NS-3

// Extract
	$ tar -xvf ns-allinone-3.36.1.tar.bz2 
// Built before running
	$ cd ns-allinone-3.36.1$ 
// If building got error for gcc try this
	$ sudo apt-get install python-software-properties
	$ sudo add-apt-repository ppa:ubuntu-toolchain-r/test
	$ sudo apt-get update
	$ sudo apt-get install gcc-4.9
	$ sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.9 50
	$ sudo apt-get install g++-4.9
	$ sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.9 50
