# TODO
- separate player events into 3 events, store all saber events and then choose important events before writing
  - store each saber swing counter finish time per hand and then get closest saber events, then fill out the rest of the events by checking if time and distance are far enough
- head events can probably be 10 events per second or less
- Dynamic player event recording (always record event at swing direction change, then raise frequency at higher speeds and lower at lower)
- Overwrite with higherscore (save total score in metadata)
- Make it work with and save modifiers
- failed replay saving
- Make modifiers be saved
- UI for deleting replays, choosing to overwrite replay, etc...
- Time manipulation
- UI for the above sad
- Speed manipulation
- more ui
- Add config file with utils
- Check replay edge cases and ensure correct total score
- Add camera manipulation
- Add Avatar stuff
- Add hollywood
- Make fancy hollywood ui
- Mux audio in game for mp4
- Make hollywood render faster?
- Upload mp4 from quest to youtube????

# UI Page Ideas
### Overview Info At Top
- date set
- score
- modifiers
- percentage and rank
- failed time (if failed)
- modifiers used

### In Depth Lower
- average cut score
- bad cuts/missed notes
- percentage without combo breaks
- openable graph of percentage and energy throughout play
- max combo

- "Watch Replay" button
- Camera drop down menu? 
- Delete replay button

## Hollywood UI on Second Page
- fps
- resolution
- fov
- bitrate

Based on above settings:
- approximate render time
- approximate file size

- Slider to choose when to start and end replay
