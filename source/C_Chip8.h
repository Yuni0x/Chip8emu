#pragma once
#include <cstdint>

// 1 byte = 8 bits
// Remember registers are in hexadecimal

// 0x200-0xFFF - Program ROM and work RAM
// 0x050-0x0A0 - Used for the built-in 4x5 pixel font set (0-F) (80-160)
// 0x000-0x1FF - Chip 8 interpreter (contains font set in emu)

// Memory Map:
// +---------------+= 0xFFF (4095) End of Chip-8 RAM
// |               |
// |               |
// |               |
// |               |
// |               |
// | 0x200 to 0xFFF|
// |     Chip-8    |
// | Program / Data|
// |     Space     |
// |               |
// |               |
// |               |
// +- - - - - - - -+= 0x600 (1536) Start of ETI 660 Chip-8 programs
// |               |
// |               |
// |               |
// +---------------+= 0x200 (512) Start of most Chip-8 programs
// | 0x000 to 0x1FF|
// | Reserved for  | ----- 0x050-0x0A0 used by fonts
// |  interpreter  |
// +---------------+= 0x000 (0) Start of Chip-8 RAM

class C_Chip8
{
public:
    uint16_t CurrentOpCode;             // 2 byte (16 bits)

    // RAM
    uint8_t Memory[4096];               // 4KB memory

    // CPU
    uint8_t V[16];                      // 16 8-bit registers (V0 to VF) (VF register "CarryFlag")
    uint16_t I;                         // Index register
    uint16_t pc;                        // Program counter register
    
    uint8_t gfx[64 * 32];               // Graphics (64x32 display)
    
    uint8_t delay_timer;                // Will count down to 0 at 60hz (if more than 0)
    uint8_t sound_timer;                // Will count down to 0 at 60hz (if more than 0)
    
    uint16_t stack[16];                 // Stack for subroutine calls
    uint16_t sp;                        // Stack pointer
    uint8_t keypad[16];                 // 16-key keypad
    
};
