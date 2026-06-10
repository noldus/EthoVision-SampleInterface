# EthoVision-SampleInterface
Real time sample interface plugin for EthoVision XT. EthoVision pushes samples through this interface during acquisition of a trial. 

Version 5 for EthoVision XT 16 and 17  
Version 6 for EthoVision XT 17.5, 18, 19

Download and open .sln file in Visual Studio 2019 or later. Build the solution with the 'Debug' configuration for debugging. Register the DLL builded with 'regsvr32 SampleInterfaceTestu(d).dll' in an elevated command prompt. In Visual Studio under 'Debugging' specify EthoVision.exe as 'Command' option. Start the debugger and watch how the DLL gets loaded into the process after oepning the experiment.
