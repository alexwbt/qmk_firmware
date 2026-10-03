# AGENTS.md

ZSA's fork of QMK Firmware (branch `firmware25`). Only ZSA keyboards are present: `zsa/voyager`, `zsa/moonlander`, `zsa/ergodox_ez`, `zsa/planck_ez`. This is not upstream QMK; see `readme.md` for the upstream-merge process.

## alexwbt keymap (primary work)

Personal Voyager keymap at `keyboards/zsa/voyager/keymaps/alexwbt/`:
- `keymap.json` - Oryx export (module list + layout). Re-exporting from Oryx overwrites `keymap.c`, so re-copying an Oryx source will clobber the hand edits.
- `keymap.c` - hand-edited: custom per-layer RGB (`ledmap`, `set_layer_color`), `process_record_user` mods-for-mouse/consumer handling. Keys use `QK_LLCK` for layer lock.
- `config.h` - tuning (tapping term, mousekey speeds, `LAYER_STATE_8BIT`, RGB startup).
- `rules.mk` - `CONSOLE_ENABLE = no`, `ORYX_ENABLE = yes`, `RGB_MATRIX_CUSTOM_KB = yes`, `LAYER_LOCK_ENABLE = yes`.

Build / flash:
```sh
qmk compile -kb zsa/voyager -km alexwbt      # or: make zsa/voyager:alexwbt
qmk flash   -kb zsa/voyager -km alexwbt      # or: make zsa/voyager:alexwbt:flash
```
Output lands in the repo root as `zsa_voyager_alexwbt.bin` / `.elf` / `.hex`, plus `.build/obj_zsa_voyager_alexwbt/`. All of these are gitignored build artifacts, not source.

Gitignore: ZSA keymaps are ignored by default. The un-ignore lines at the end of `.gitignore` (`!**/alexwbt`, `!**/alexwbt/**`) must stay for the keymap to be committable.

## Trackpad / PTP

Windows Precision Touchpad work lives in the `modules/zsa` git submodule (`modules/zsa/navigator_trackpad`). Commit changes there first, then bump the submodule pointer in the parent repo (`git -C modules/zsa ...`, then `git add modules/zsa`).

Debug guides: `PTP_DEBUG_GUIDE.md` (Windows), `PTP_DEBUG_LINUX.md`, `debug_hid_descriptor.py`, `diagnose_ptp.sh`. Enable `CONSOLE_ENABLE = yes` for PTP console output. `modules/zsa/navigator_trackpad/post_config.h` caps trackpad physical size at ~3.5x; going higher breaks two-finger-tap right-click.

## Verify

```sh
qmk lint --keyboard zsa/voyager
qmk format-c --core-only <files> && qmk format-python <files> && qmk format-text <files>
qmk test-c                # or: make test:all
```
Module host tests compile standalone with gcc (build command in each test's header comment), e.g. `gcc -Wall -lm -o /tmp/nt_filter_test modules/zsa/navigator_trackpad/tests/filter_test.c`.
