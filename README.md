# STM32 UART Serial LED Control

## Project Overview
This project demonstrates interactive serial control on an **STM32 Nucleo-C031C6** microcontroller using **UART Serial Communication**. 
When you type `ON` in the Serial Monitor,the LED turns on; when you type `OFF`, the LED turns off.

## Live Simulation
You can run and test the interactive circuit directly in your web browser: 
>> [Run Wokwi Simulation](https://wokwi.com/projects/468728597210820609)

## Key Specifications
- Microcontroller: STM32 Nucleo-C031C6.
- Interface: UART Serial Monitor (Baud rate: 9600).
- Actuator: Red LED (Pin D13).
- Commands: "ON" (turns LED on), "OFF" (turns LED off).

## Repository Structure
- `sketch.ino` — STM32 source code processing serial text input.
- `diagram.json` — Wokwi circuit schematic and wiring connections.
- `wokwi-project.txt` — Simulation configuration file.
