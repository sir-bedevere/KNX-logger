//
// Copyright (c) 2002-2014 WEINZIERL ENGINEERING GmbH
// All rights reserved.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY,
// WHETHER IN CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE
//

#ifndef __KDRIVE_EXPRESS_DEFS_H__
#define __KDRIVE_EXPRESS_DEFS_H__

#include "kdrive_express_config.h"

#ifdef __cplusplus
extern "C" {
#endif

#define KDRIVE_MAX_GROUP_VALUE_LEN (14)	/*!< The Maximum Length of a Datapoint Value in a GroupValue Telegram */
#define KDRIVE_SN_LEN (6) /*!< The Length of a KNX Serial Number */
#define KDRIVE_DA_LEN (6) /*!< The Length of a KNX Domain Address */
#define KDRIVE_MAC_LEN (6) /*!< The Length of a MAC Address */
#define KDRIVE_INVALID_DESCRIPTOR (-1) /*! Indicates an invalid descriptor */
#define KDRIVE_DPT16_LENGTH (14) /*!< The length of a KNX character string for DPT-16 is 112 bits or 14 bytes */
#define KDRIVE_BITS(length)	((length) * 8) /*!< converts the length of a byte buffer into length in bits */

// Message codes
#define KDRIVE_CEMI_L_DATA_REQ (0x11) /*! cEMI message code for L_Data.req */
#define KDRIVE_CEMI_L_DATA_CON (0x2E) /*! cEMI message code for L_Data.con */
#define KDRIVE_CEMI_L_DATA_IND (0x29) /*! cEMI message code for L_Data.ind */

#ifdef __cplusplus
}
#endif

#endif /* __KDRIVE_EXPRESS_DEFS_H__ */
