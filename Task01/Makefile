obj-m +=Hello.o
RELEASE=`uname -r`
KDIR= /usr/src/linux-headers-$(RELEASE)

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

