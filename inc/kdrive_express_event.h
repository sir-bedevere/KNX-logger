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

#ifndef __KDRIVE_EXPRESS_EVENT_H__
#define __KDRIVE_EXPRESS_EVENT_H__

#include "kdrive_express_config.h"

/*************************************
 ** Event Codes
 **************************************/

#define KDRIVE_EVENT_OPENING							(0x0001)	/*!< The opening signal is emitted when the port is about to be opened */
#define KDRIVE_EVENT_OPENED								(0x0002)	/*!< The opened signal is emitted when the port was opened */
#define KDRIVE_EVENT_CLOSING							(0x0003)	/*!< The closing signal is emitted when the port is about to be closed */
#define KDRIVE_EVENT_CLOSED								(0x0004)	/*!< The closed signal is emitted when the port was closed */
#define KDRIVE_EVENT_TERMINATED							(0x0005)	/*!< The terminated signal is emitted when the port was closed (internally) on error */

#define KDRIVE_EVENT_KNX_BUS_CONNECTED					(0x0006)	/*!< The knx bus connected signal is emitted when the KNX bus was connected */
#define KDRIVE_EVENT_KNX_BUS_DISCONNECTED				(0x0007)	/*!< The knx bus disconnected signal is emitted when the KNX bus was disconnected */

#ifdef __cplusplus
extern "C" {
#endif

	/*!
		The Event Callback definition
	*/
	typedef void (*kdrive_event_callback)(int32_t ap, uint32_t e);

	/*!
		The event callback, for a specific access port
		There can only be one callback per access port
		To remove the callback add an empty callback (0)
	*/
	kdrive_API error_t kdrive_set_event_callback(int32_t ap, kdrive_event_callback c);

#ifdef __cplusplus
}
#endif

#endif /* __KDRIVE_EXPRESS_EVENT_H__ */
