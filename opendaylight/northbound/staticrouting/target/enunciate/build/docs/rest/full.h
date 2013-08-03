#import "enunciate-common.h"

@class FULLNS0StaticRoutes;
@class FULLNS0StaticRoute;

#ifndef DEF_FULLNS0StaticRoutes_H
#define DEF_FULLNS0StaticRoutes_H

/**
 * (no documentation provided)
 */
@interface FULLNS0StaticRoutes : NSObject <EnunciateXML>
{
  @private
    NSArray *_staticRoute;
}

/**
 * (no documentation provided)
 */
- (NSArray *) staticRoute;

/**
 * (no documentation provided)
 */
- (void) setStaticRoute: (NSArray *) newStaticRoute;
@end /* interface FULLNS0StaticRoutes */

#endif /* DEF_FULLNS0StaticRoutes_H */
#ifndef DEF_FULLNS0StaticRoute_H
#define DEF_FULLNS0StaticRoute_H

/**
 * (no documentation provided)
 */
@interface FULLNS0StaticRoute : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_prefix;
    NSString *_nextHop;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) prefix;

/**
 * (no documentation provided)
 */
- (void) setPrefix: (NSString *) newPrefix;

/**
 * (no documentation provided)
 */
- (NSString *) nextHop;

/**
 * (no documentation provided)
 */
- (void) setNextHop: (NSString *) newNextHop;
@end /* interface FULLNS0StaticRoute */

#endif /* DEF_FULLNS0StaticRoute_H */
