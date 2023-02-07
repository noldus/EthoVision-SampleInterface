1) create unique guid (through 'create GUID' tool)
changes (search for 609F2BD9-EADE-463E-87A8-32235C6DAB97 and use *.* since cpp, uuid(609F2BD9-EADE-463E-87A8-32235C6DAB97) in *.idl and *.rgs files are affected)
- GUID1: {72B09CC2-F086-47FC-88B4-07767426A471}
- GUID2: {72B09CC2-F086-47FC-88B4-07767426A472}
- GUID3: {72B09CC2-F086-47FC-88B4-07767426A473}

2) register with 'regsvr32 SampleInterfaceTestu(d).dll'

3) component register itself at category {38738E07-66B9-4F2B-BB99-0A0F9F047AA9} (CATID_VtsAddinsSampleInterface5)
