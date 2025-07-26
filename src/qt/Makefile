
.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. bitcoinII_qt test_bitcoinII_qt
clean: FORCE
	$(MAKE) -C .. bitcoinII_qt_clean test_bitcoinII_qt_clean
check: FORCE
	$(MAKE) -C .. test_bitcoinII_qt_check
bitcoinII-qt bitcoinII-qt.exe: FORCE
	 $(MAKE) -C .. bitcoinII_qt
apk: FORCE
	$(MAKE) -C .. bitcoinII_qt_apk
