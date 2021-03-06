#ifndef MPU9X50_PARAMS_H
#define MPU9X50_PARAMS_H

#include "board.h"
#include "saul_reg.h"
#include "mpu9x50.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name   Default configuration parameters for the MPU9X50 driver
 * @{
 */
#ifndef MPU9X50_PARAM_I2C
#define MPU9X50_PARAM_I2C         I2C_DEV(0)
#endif
#ifndef MPU9X50_PARAM_ADDR
#define MPU9X50_PARAM_ADDR        (MPU9X50_HW_ADDR_HEX_68)
#endif
#ifndef MPU9X50_PARAM_COMP_ADDR
#define MPU9X50_PARAM_COMP_ADDR   (MPU9X50_COMP_ADDR_HEX_0E)
#endif
#ifndef MPU9X50_PARAM_SAMPLE_RATE
#define MPU9X50_PARAM_SAMPLE_RATE (MPU9X50_DEFAULT_SAMPLE_RATE)
#endif

#ifndef MPU9X50_PARAMS
#define MPU9X50_PARAMS            { .i2c         = MPU9X50_PARAM_I2C,       \
                                    .addr        = MPU9X50_PARAM_ADDR,      \
                                    .comp_addr   = MPU9X50_PARAM_COMP_ADDR, \
                                    .sample_rate = MPU9X50_PARAM_SAMPLE_RATE }
#endif
#ifndef MPU9X50_SAUL_INFO
#define MPU9X50_SAUL_INFO         { .name = "mpu9x50" }
#endif
/**@}*/

/**
 * @brief   MPU9X50 configuration
 */
static const mpu9x50_params_t mpu9x50_params[] =
{
    MPU9X50_PARAMS
};

/**
 * @brief   Additional meta information to keep in the SAUL registry
 */
static const saul_reg_info_t mpu9x50_saul_info[] =
{
    MPU9X50_SAUL_INFO
};

#ifdef __cplusplus
}
#endif

#endif /* MPU9X50_PARAMS_H */
/** @} */
