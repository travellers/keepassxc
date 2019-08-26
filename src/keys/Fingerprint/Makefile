
INC = /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/um \
/C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/shared \
/C/'Program Files (x86)'/'Microsoft Visual Studio'/2019/Community/VC/Tools/MSVC/14.21.27702/include \
/C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/ucrt


LIB = /c/'Program Files (x86)'/'Windows Kits'/10/Lib/10.0.17763.0/um/x64

alllib: .so  .a
.phony: alllib

.so: Fingerprint.h
#	@echo $(INC)
	g++ -shared -o libFingerprint.so  Fingerprint.cpp  -L . libwinbio.dll.so -l stdc++ -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/um -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/shared -idirafter /C/'Program Files (x86)'/'Microsoft Visual Studio'/2019/Community/VC/Tools/MSVC/14.21.27702/include -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/ucrt

.phony: .so

.a: Fingerprint.h
#	@echo $(INC)
	g++ -o libFingerprint.a  Fingerprint.cpp  -L . libwinbio.lib.a -l stdc++ -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/um -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/shared -idirafter /C/'Program Files (x86)'/'Microsoft Visual Studio'/2019/Community/VC/Tools/MSVC/14.21.27702/include -idirafter /C/'Program Files (x86)'/'Windows Kits'/10/Include/10.0.17763.0/ucrt

.phony: .a


.exe: 
	g++ -o test.exe test.cpp libFingerprint.so

.phony: .exe

cleanlib:
	rm -f libFingerprint.so libFingerprint.a

.phony: cleanlib