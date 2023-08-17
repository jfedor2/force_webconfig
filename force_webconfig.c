#include <hardware/watchdog.h>
#include <pico/multicore.h>

void main() {
    watchdog_hw->scratch[5] = 0xe77784a5;
    watchdog_reboot(0, 0, 0);
    while (true) {
        __wfi();
    }
}
