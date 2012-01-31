AMPly - An Open Source Modular Audio Amplifier
==============================================

Introduction
------------

AMPly is a small hobbyist audio amplifier. It's made up from modules that talk
over a system-wide multi-master I²C bus and are wired up however. The audio
path is all analogue (at the moment!). It's designed for easy extensibility
without sacrificing noticable audio quality (audiophiles, perhaps look
elsewhere...) and as such the power supply is a switch mode regulator and the
power amplification is Class D. I can't hear a difference, even on some pretty
decent speakers. Maybe you can. If not, perhaps you need better speaker cables.


Modules
-------

Current modules:

* Power Amplifier
* Power Supply

Coming-Soon modules:

* Volume Control

Planned modules:

* Source Select
* System Control
* Front Panel
* Remote Control
* FM Radio


Tools and Technology
--------------------

KiCAD has been used for all the hardware design. All the microcontrollers are
currently Atmel AVRs with code in C via avr-gcc, though the system control
module will probably end up using an STM32 with C via gcc.

License
-------

All software is licensed under the simplified BSD license.

Hardware is currently unlicensed: I present these design files for you to do
whatever you want personally, but at the moment without a legal framework.

Author
------

Adam Greig, 2012
