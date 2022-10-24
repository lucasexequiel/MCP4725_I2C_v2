#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <mcp4725.h>
#include <string.h>
#include <i2cdev.h>

#define VDD 3.3

    // static void wait_for_eeprom(i2c_dev_t *dev)
    // {
    //     bool busy;
    //     while (true)
    //     {
    //         ESP_ERROR_CHECK(mcp4725_eeprom_busy(dev, &busy));
    //         if (!busy)
    //             return;
    //         printf("...DAC is busy, waiting...\n");
    //         vTaskDelay(1);
    //     }
    // }

    void task(void *pvParameters)
    {
        while (1)
        {
            printf("Entre en la funcion\n");
        }
        
        // i2c_dev_t dev;
        // memset(&dev, 0, sizeof(i2c_dev_t));

        // // Init device descriptor
        // ESP_ERROR_CHECK(mcp4725_init_desc(&dev, 0x60, 0, GPIO_NUM_19, GPIO_NUM_21));

        // mcp4725_power_mode_t pm;
        // ESP_ERROR_CHECK(mcp4725_get_power_mode(&dev, true, &pm));
        // if (pm != MCP4725_PM_NORMAL)
        // {
        //     printf("DAC was sleeping... Wake up Neo!\n");
        //     ESP_ERROR_CHECK(mcp4725_set_power_mode(&dev, true, MCP4725_PM_NORMAL));
        //     wait_for_eeprom(&dev);
        // }

        // printf("Set default DAC output value to MAX...\n");
        // ESP_ERROR_CHECK(mcp4725_set_raw_output(&dev, MCP4725_MAX_VALUE, true));
        // wait_for_eeprom(&dev);

        // printf("Now let's generate the sawtooth wave in slow manner\n");

        // float vout = 0;
        // while (1)
        // {
        //     vout += 0.1;
        //     if (vout > VDD)
        //         vout = 0;

        //     printf("Vout: %.02f\n", vout);
        //     ESP_ERROR_CHECK(mcp4725_set_voltage(&dev, VDD, vout, false));

        //     // It will be very low freq wave
        //     vTaskDelay(pdMS_TO_TICKS(100));
        // }
    }

    void app_main()
    {
//     // Init i2cdev library
        // ESP_ERROR_CHECK(i2cdev_init());
        printf("hola mundo! \n");
    xTaskCreate(task, "test", configMINIMAL_STACK_SIZE * 8, NULL, 5, NULL);
    }



