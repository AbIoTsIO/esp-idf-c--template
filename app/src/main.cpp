// C/C++ Headers

// Other Posix headers

// IDF headers
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// Component headers

// Public Headers

// Private Headers
#include "pirComponent.hpp"

extern "C"
{
    const char *TAG = "IDLETASK";
    constexpr auto STACK_DEPTH = configMINIMAL_STACK_SIZE * 5;

    void app_main()
    {
        ESP_LOGD(TAG, "Booting the motion detector..");
        PirComponent pirComponent = PirComponent();
        pirComponent.startMotionDetector();

        auto idleTask = [](void *parameters)
        {
            ESP_LOGD(TAG, "Starting the idle task");
            for (;;)
            {
                ESP_LOGD(TAG, "Idle Task RUNNING");
                vTaskDelay(pdMS_TO_TICKS(1000));
            }
        };

        xTaskCreate(idleTask, "idleTask", STACK_DEPTH, NULL, 0, NULL);
    }
}
