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

#ifndef __KDRIVE_EXPRESS_H__
#define __KDRIVE_EXPRESS_H__

#include "kdrive_express_config.h"
#include "kdrive_express_defs.h"
#include "kdrive_express_error.h"
#include "kdrive_express_event.h"
#include "kdrive_express_license.h"
#include "kdrive_express_logger.h"

#ifdef KDRIVE_EXPRESS_ACCESS_ENABLED
#include "kdrive_express_access.h"
#include "kdrive_express_dpt.h"
#endif /* KDRIVE_EXPRESS_ACCESS_ENABLED */

#ifdef KDRIVE_EXPRESS_SERVICES_ENABLED
#include "kdrive_express_services.h"
#endif /* KDRIVE_EXPRESS_SERVICES_ENABLED */

#ifdef KDRIVE_EXPRESS_OBJECT_SERVER_ENABLED
#include "kdrive_express_objser.h"
#endif /* KDRIVE_EXPRESS_OBJECT_SERVER_ENABLED */

#ifdef KDRIVE_EXPRESS_EASY_ENABLED
#include "kdrive_express_easy.h"
#endif /* KDRIVE_EXPRESS_EASY_ENABLED */

/*!
	\mainpage

	kdrive is a cross-platform C++ software component library from Weinzierl Engineering GmbH.
	It defines a complete ecosystem for the development of KNX applications on platforms with POSIX (like)
	operating systems, such as Linux, Windows CE and iOS. The kdriveExpress Library is a "C" interface
	to the kdrive C++ library.

	\sa kdrive_express_access
	\sa kdrive_express_dpt
	\sa kdrive_express_services
	\sa kdrive_express_objser
	\sa kdrive_express_easy
	\sa kdrive_express_logger
	\sa kdrive_express_license
*/

#endif /* __KDRIVE_EXPRESS_H__ */
