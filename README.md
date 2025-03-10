# Chip8emu
 Project for learning emulation

### Building And Running
To get started install CMake and follow the follwing commands

```sh
# You need to clone with submodules, otherwise SDL will not download.
git clone https://github.com/Yuni0x/Chip8emu --depth=1 --recurse-submodules
cd Chip8emu
cmake -S .. -B ..\build\win
```

After that, open up the .sln file in /build/win