

// pin set
#define VOLTAGE_PIN A3
#define PWM_OUT_PIN 9
#define SENSOR_POWER_PIN 5
#define ADC_PIN A2

#define LORAWAN_TX 3
#define LORAWAN_RX 4
#define LORAWAN_RST 10

#define DEBUG_OUT_ENABLE 1

#define SOIL_ADC_WATER 550
#define SOIL_ADC_AIR 660
#define SOIL_ADC_UNIT ((SOIL_ADC_AIR - SOIL_ADC_WATER) / 100.0)

#define AT_TIMEOUT 3000

#define DEVEUI "6081F9EFE6C31D65"
#define APPEUI "6081F9D6B0D9B9F4"
#define APPKEY "9ED8865D20830BF00EDC6DFB572CD254"

// 
// #define SLEEP_CYCLE 450
#define SLEEP_CYCLE 1