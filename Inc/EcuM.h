#ifndef ECUM_H_
#define ECUM_H_

/****************************************************************************************************/
/*                                      Includes                                                    */
/****************************************************************************************************/
#include "Std_Types.h"

/*SWS_EcuM_04040 */
typedef uint32 EcuM_WakeupSourceType;

#define ECUM_WKSOURCE_POWER             (EcuM_WakeupSourceType)0x01
#define ECUM_WKSOURCE_RESET             (EcuM_WakeupSourceType)0x02
#define ECUM_WKSOURCE_INTERNAL_RESET    (EcuM_WakeupSourceType)0x04
#define ECUM_WKSOURCE_INTERNAL_WDG      (EcuM_WakeupSourceType)0x08
#define ECUM_WKSOURCE_EXTERNAL_WDG      (EcuM_WakeupSourceType)0x010

#endif