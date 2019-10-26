# Tethys
C++ standard library for rogue-like & SLG game developing

## System Arch

### I. Frontend Environment
Cocos2dx C++, Qt C++, OpenGL, Naive CMD

### II. Core
|--|Skin/Texture|EFX|Comments|
|--|:----------:|:-:|--------|
|Movement|○|●|up, down, left, right|
|Motion & Action|○|●|static, dynamic, run, jump, swim, fly|
|Inventory|●|●|coins, weapons, chest, pickups|
|**Status**|○|○|HP, ATK, MP, DFS, Shield|
|Character|●|●||

### III. UI/Interface
|--|Skin/Texture|EFX|Comments|
|--|:----------:|:-:|--------|
|HUD|●|●|position, opacity, display pattern|
|Menu|●|●|position, items|
|BGM/Sound|○|●|volumn, on/off, trigger|

### IV. Scene
|--|Skin/Texture|EFX|Comments|
|--|:----------:|:-:|--------|
|Shades & Ray|●|●|
|Map & Range|●|●|storage, locality, overlay, minimap|
|Monster & NPC|●|●|HP, ATK, MP, DFS, position, walk/atk pattern, interaction|

### V. Storage saves
type, autosave, bootload, achievements (trigger)

