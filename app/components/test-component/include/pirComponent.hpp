#pragma once

// C/C++ Headers
#include <stdio.h>

// Other Posix headers

// IDF headers
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"

// Component headers
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// Public Headers

// Private Headers

extern "C"
{
    class PirComponent
    {
    private:
        const char *TAG = "PirComponent";

        /**
         * @brief Intialize the PIR GPIO pins
         *
         * @return esp_err_t
         */
        inline esp_err_t initializeGpio(void);

    public:
        PirComponent();

        /**
         * @brief Start the motion detection
         *
         * @return esp_err_t
         */
        esp_err_t startMotionDetector(void);

        ~PirComponent();
    };
}
