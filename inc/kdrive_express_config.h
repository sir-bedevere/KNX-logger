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

#ifndef __KDRIVE_EXPRESS_CONFIG_H__
#define __KDRIVE_EXPRESS_CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

	/*******************************
	** Enabled Components
	********************************/

#ifndef KDRIVE_EXPRESS_ACCESS_ENABLED
	#define KDRIVE_EXPRESS_ACCESS_ENABLED
#endif /* KDRIVE_EXPRESS_ACCESS_ENABLED */

#ifndef KDRIVE_EXPRESS_SERVICES_ENABLED
	#define KDRIVE_EXPRESS_SERVICES_ENABLED
#endif /* KDRIVE_EXPRESS_SERVICES_ENABLED */

#ifndef KDRIVE_EXPRESS_OBJECT_SERVER_ENABLED
	/* #define KDRIVE_EXPRESS_OBJECT_SERVER_ENABLED */
#endif /* KDRIVE_EXPRESS_OBJECT_SERVER_ENABLED */

#ifndef KDRIVE_EXPRESS_EASY_ENABLED
	/* #define KDRIVE_EXPRESS_EASY_ENABLED */
#endif /* KDRIVE_EXPRESS_EASY_ENABLED */

#ifndef KDRIVE_EXPRESS_COMMERCIAL_ENABLED
	/* #define KDRIVE_EXPRESS_COMMERCIAL_ENABLED */
#endif /* KDRIVE_EXPRESS_COMMERCIAL_ENABLED */

	/*******************************
	** Type Definitions
	********************************/

#ifndef KDRIVE_TYPES
#define KDRIVE_TYPES

	typedef unsigned char uint8_t;		/*!< 8 bit unsigned char */
	typedef unsigned short uint16_t;	/*!< 16 bit unsigned char */
	typedef unsigned int uint32_t;		/*!< 32 bit unsigned char */
	typedef signed char int8_t;			/*!< 8 bit signed char */
	typedef short int16_t;				/*!< 16 bit signed int */
	typedef int int32_t;				/*!< 32 bit signed int */
	typedef float float32_t;			/*!< 32 bit single precision float */

#endif /* KDRIVE_TYPES */

	/*******************************
	** Error Type
	********************************/

#ifndef KDRIVE_ERROR_TYPE
#define KDRIVE_ERROR_TYPE

	typedef int32_t error_t;

#endif /* KDRIVE_ERROR_TYPE */

	/*******************************
	** Bool Type
	********************************/

#ifndef KDRIVE_BOOL_TYPE
#define KDRIVE_BOOL_TYPE

	typedef int32_t bool_t;

#endif /* KDRIVE_BOOL_TYPE */

#ifdef __cplusplus
}
#endif

/*******************************
** WIN32 DLL Import Export
********************************/

#if defined(_WIN32) && defined(_DLL)
#if !defined(KDRIVE_DLL)
#define KDRIVE_DLL
#endif
#endif

#if defined(_WIN32) && defined(KDRIVE_DLL)
#if defined(kdrive_EXPORTS)
#define kdrive_API __declspec(dllexport)
#else
#define kdrive_API __declspec(dllimport)
#endif
#endif

#if !defined(kdrive_API)
#define kdrive_API
#endif

#endif /* __KDRIVE_EXPRESS_CONFIG_H__ */
