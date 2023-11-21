# Yakamoz Keyboard QMK Configuration

### To Build Firmware In Github Action
- Setup
  - Fork this repo.
  - Enable GitHub Actions on your fork.
- Build firmware
  - Push a commit to trigger the build.
  - Download the artifact.

### To Ender Flash Mode
- The Pico can receive a new firmware by using the device firmware upgrade mode (DFU). Press the “Bootsel” button when powering the microcontroller and it will enter into DFU mode. In this mode, the microcontroller will expose its flash memory as a thumb drive, you will just need to drop the UF2 file into the drive and the board will write it into its flash.
- Alternatively, if QMK has been loaded, double tap the reset button.


---
[Yakamoz Keyboard](https://github.com/ozkan/yakamoz)        
[Parts List and Build Guide](https://ozkancelik.com/yakamoz/)    
