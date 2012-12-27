## Makefile.am -- Process this file with automake to produce Makefile.in

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = pgr demo

nobase_include_HEADERS = \
  pgr/export.h \
  pgr/Tags.h \
  pgr/Property.h \
  pgr/Node.h \
  pgr/Environment.h



PKGDIR = /tmp/$(PACKAGE)-$(VERSION)
fpm-deb: all
	make install DESTDIR=$(PKGDIR)
	fpm -s dir -t deb -n $(PACKAGE) -v $(VERSION) -C $(PKGDIR) .
	-rm -rf $(PKGDIR)

