# STOP!
__This project was forked from github but the code is from GitLab:__ https://gitlab.com/PropNuts/wizardrx

This code has been re configured to be used on a esp32 Wroom uploaded via arduino ide.  The purpose of this fork is to present a path to incorporate into the clearview_interface_public __ https://github.com/ryaniftron/clearview_interface_public to then be used as a mirrored node for video streaming via MQTT commands for RotorHazard __ https://github.com/RotorHazard/RotorHazard  The set frequency command needs to be changed from a set frequency to actual commands via MQTT.

The other option instead of using a 4 digit freqency number would be to use a matrix of channel numbers and frequency groups that every typically uses.  This is where I probably would need help and or the use of another project that has already do this.

This is my first attempt at code so it may be ineffecient.  My only changes were to the .ino main file.  The Reciever and RecieverSPIDriver code are exact copies of Propnuts WizardRX firmware found at their github site.
