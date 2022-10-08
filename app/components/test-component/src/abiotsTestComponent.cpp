#include "abiotsTestComponent.hpp"

void AbiotsTestComponent::toString(void)
{
    ESP_LOGD(TAG, "----This is the template project %s", abiotsTestName);
    ESP_LOGD(TAG, "----The project verison is %s", projectVer);
}
