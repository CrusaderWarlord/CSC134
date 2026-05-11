# Crusader Character Creator — PRD

## Overview
A console-based character creation tool (C++) for a fantasy RPG addressing the player as "Crusader." The program collects a character's language preference, name (spelled and pronounced), race, and class, then assigns a base stat block modified by class choice.

## Goals
- Provide a multilingual entry point so players can complete character creation in their preferred language.
- Let players pick from a fixed roster of fantasy races and classes.
- Produce a baseline stat sheet (might, toughness, intellect, perseverance, dexterity, charisma) derived from race, then adjusted by class.

## Current Scope (as implemented in `Project.c++`)

### Languages (11)
French, English, Spanish, German, Italian, Bulgarian, Russian, Polish, Czech, Romanian, Dutch.
- Selected by number (1–11) or by name in any supported language.
- Input is trimmed and lowercased; unrecognized input falls back to French with an apology message.

### Prompts (per language)
- Greeting
- Ask name (spelling)
- Ask name (pronunciation)
- Ask race + race options list
- Ask class + class options list

### Races (11)
Humanoids: Human, Elf, Dwarf, Ogre
Bestials: Arachnian, Salamandrine, Lizard Man, Raptorian
Unusuals: Atheztug (a.k.a. Pseudodeus), Draconian, Daedron

Each race defines six base stats: `might`, `toughness`, `intellect`, `perserverance` *(sic)*, `dexterity`, `charisma`.

### Classes (12)
Fighters: Warrior, Ranger, Barbarian, Monk
Spellcasters: Mage, Sorcerer, Healer, Warlock
Thieves: Rogue, Assassin, Bard, Thief

Class selection applies stat modifiers on top of the race base.

## Known Gaps / Issues
- **No output of the final character sheet.** Stats are computed but never printed; `main` returns immediately after applying class modifiers.
- **Class menu/selection mismatch.** Per-language `classOptions` shows three groups numbered (1)–(4) each, but the selection logic in `main` expects values "1"–"12". Players will select "1" thinking "Warrior" and may get an unintended class branch — or, for spellcasters/thieves, no matching branch at all.
- **Typo:** `perserverance` should be `perseverance` (consistent throughout, so safe to rename).
- **Bulgarian/Russian/Polish/Czech/Romanian/Dutch class lists contain untranslated English fragments** (`Warlock`, `Rogue`, `Assassin`, `Barde`, `Thief`).
- **No input validation** on race/class numeric selection — invalid race yields all-zero stats; invalid class yields no modifier silently.
- **`Name_spelt` and `Name_pronounced` are collected but never used.**
- **Language list shows mismatched numbering** vs. the order languages were added (Dutch was appended without renumbering the prompt text — currently fine, but easy to drift).
- **No build configuration** (`Makefile`, CMake, etc.) checked in; compilation steps are implicit.

## Out of Scope (today)
- Saving characters, persistence, or any file I/O.
- Combat, inventory, or any gameplay loop beyond character generation.
- GUI / web frontend.

## Suggested Next Steps
1. Print the final character sheet (name, pronunciation, race, class, stats) before exiting.
2. Fix the class-selection numbering — either renumber class options 1–12 in every language, or change the selection logic to accept group + index.
3. Add input validation and re-prompt loops for race and class.
4. Fix `perserverance` → `perseverance`.
5. Complete translations for the partially translated language strings.
6. Add a `Makefile` or CMake build with a `Project_test` target (a sibling `Project_test` path exists but is untracked).
