#ifndef ROOT_RVersion
#define ROOT_RVersion

/* Version information automatically generated by installer. */

/*
 * These macros can be used in the following way:
 *
 *    #if ROOT_VERSION_CODE >= ROOT_VERSION(6,32,4)
 *       #include <newheader.h>
 *    #else
 *       #include <oldheader.h>
 *    #endif
 *
*/

#define ROOT_RELEASE "6.21/03"
#define ROOT_RELEASE_DATE "May 19 2020"
#define ROOT_RELEASE_TIME "10:21:44"
#define ROOT_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))
#define ROOT_VERSION_CODE ROOT_VERSION(6,21,3) /* 398595 */

#endif
