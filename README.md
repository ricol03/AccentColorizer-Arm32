# AccentColorizer-Arm32

Colorize Windows with accent color of your choice - without modifying system files

AccentColorizer patches Windows theme data in-memory and recolorizes everything as soon as you change the accent color.

Supported Windows 10 build 15035 (Windows RT 8.0 and RT 8.1 are untested as of 23/12/2023).

### Progress Bar colorization

AccentColorizer supports colorization of Progress Bars, but it is not recommended to enable, because it will make it difficult to distinguish between their states (progress bars may turn red to indicate an error, the disk full indicator turns red to indicate that space is running out). However, this is rarely used, and if you want to enable this feature, create the `HKEY_CURRENT_USER\Software\AccentColorizer` key in the registry and the DWORD value `ColorizeProgressBar`, set it to `1` and restart AccentColorizer.

This can be done from command line:
```
reg add "HKEY_CURRENT_USER\SOFTWARE\AccentColorizer" /v ColorizeProgressBar /t REG_DWORD /d 1 /f
```

## Gallery

![Windows 10 build 15035](https://github.com/ricol03/AccentColorizer-Arm32/blob/master/win10_15035.png?raw=true)

## Special thanks

Thanks to *@pahaze* and *@Deinsti* for the [CMake](https://xdaforums.com/t/make-and-cmake-for-arm32-plus-other-apps.4212725) and [llvm-mingw32](https://github.com/armdevvel/llvm-mingw) reimplementations for Windows arm32\
Thanks to *@krlvm* for the original [AccentColorizer](https://github.com/krlvm/AccentColorizer) project\
Thanks to *@mcdenis* for his idea and work on original [AccentApplicator](https://github.com/mcdenis/AccentApplicator)\
Thanks to *@rounk-ctrl* and his work on [AccentApplicator](https://github.com/rounk-ctrl/AccentApplicator) for bringing this project back to live
