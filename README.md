# Replay

A Beat Saber mod that records and replays gameplay sessions. Records player movements, note cuts, scores, and game state so you can watch your plays back later.

## What it does

The mod hooks into Beat Saber's game systems to capture everything that happens during a play session. When you finish a song, it saves a replay file that can be loaded later to watch the exact same gameplay again.

**Recording:**
- Tracks head and saber positions/rotations every frame
- Captures all note cuts with full details (cut angle, speed, direction, scoring)
- Records misses and obstacle interactions
- Saves metadata like score, modifiers, completion status, and timestamps

**Replay:**
- Plays back recorded sessions with frame-accurate timing
- Recreates player movements, note cuts, and scoring
- Handles all the game state needed to make replays look identical to the original play

**UI:**
- Browse and manage your saved replays
- View replay details (score, modifiers, date, etc.)
- Delete replays you don't want to keep

## Technical stuff

Built in C++20 using IL2CPP hooking to intercept game methods at runtime. The recording system uses binary serialization for efficient storage of event data, while metadata (song info, scores, etc.) is stored as JSON.

The architecture is split into recording and replaying modules, with separate systems for tracking player movement, note events, and obstacles. Events are stored as time-series data with efficient lookup for playback.

Hooks are installed on:
- Audio time sync for accurate timing
- Note controllers to capture cuts/misses
- Score controllers for performance tracking
- Player transforms for movement recording
- Game state managers for lifecycle handling

Uses CMake for building and integrates with Beat Saber's modding toolchain (qpm, beatsaber-hook). Built for Quest, so requires Android NDK.

## Project structure

```
Replay/
├── include/
│   ├── Recording/       # Recording system
│   ├── Replaying/       # Replay system
│   ├── UI/              # UI components
│   ├── Utils/           # Helper functions
│   └── Hooks/           # Hook definitions
├── src/                 # Implementation files
└── CMakeLists.txt
```

## Credits

* [zoller27osu](https://github.com/zoller27osu), [Sc2ad](https://github.com/Sc2ad) and [jakibaki](https://github.com/jakibaki) - [beatsaber-hook](https://github.com/sc2ad/beatsaber-hook)
* [raftario](https://github.com/raftario) - [vscode-bsqm](https://github.com/raftario/vscode-bsqm) and [this template](https://github.com/raftario/bmbf-mod-template)
