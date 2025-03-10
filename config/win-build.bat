@echo OFF

git clone https://github.com/Yuni0x/Chip8emu --depth=1 --recurse-submodules
cd Chip8emu
cmake -S .. -B ..\build\win