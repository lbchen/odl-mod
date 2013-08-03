#import "enunciate-common.h"

@class FULLNS0SubnetConfig;
@class FULLNS0SubnetConfigs;

#ifndef DEF_FULLNS0SubnetConfig_H
#define DEF_FULLNS0SubnetConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SubnetConfig : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_subnet;
    NSArray *_nodePorts;
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
- (NSString *) subnet;

/**
 * (no documentation provided)
 */
- (void) setSubnet: (NSString *) newSubnet;

/**
 * (no documentation provided)
 */
- (NSArray *) nodePorts;

/**
 * (no documentation provided)
 */
- (void) setNodePorts: (NSArray *) newNodePorts;
@end /* interface FULLNS0SubnetConfig */

#endif /* DEF_FULLNS0SubnetConfig_H */
#ifndef DEF_FULLNS0SubnetConfigs_H
#define DEF_FULLNS0SubnetConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SubnetConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_subnetConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) subnetConfig;

/**
 * (no documentation provided)
 */
- (void) setSubnetConfig: (NSArray *) newSubnetConfig;
@end /* interface FULLNS0SubnetConfigs */

#endif /* DEF_FULLNS0SubnetConfigs_H */
