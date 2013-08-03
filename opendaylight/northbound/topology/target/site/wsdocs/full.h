#import "enunciate-common.h"

@class FULLNS0NodeConnector;
@class FULLNS0EdgeProperties;
@class FULLNS0Node;
@class FULLNS0Property;
@class FULLNS0TopologyUserLinkConfig;
@class FULLNS0TopologyUserLinks;
@class FULLNS0Topology;
@class FULLNS0Edge;
@class FULLNS0Bandwidth;
@class FULLNS0Capabilities;
@class FULLNS0State;
@class FULLNS0Tables;
@class FULLNS0TimeStamp;
@class FULLNS0Tier;
@class FULLNS0MacAddress;
@class FULLNS0Name;
@class FULLNS0Latency;
@class FULLNS0Config;
@class FULLNS0Buffers;
@class FULLNS0Actions;
@class FULLNS0SupportedBandwidth;
@class FULLNS0PeerBandwidth;
@class FULLNS0AdvertisedBandwidth;

#ifndef DEF_FULLNS0NodeConnector_H
#define DEF_FULLNS0NodeConnector_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnector : NSObject <EnunciateXML>
{
  @private
    NSString *_nodeConnectorIDString;
    NSString *_type;
    FULLNS0Node *_nodeConnectorNode;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorIDString: (NSString *) newNodeConnectorIDString;

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeConnectorNode;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorNode: (FULLNS0Node *) newNodeConnectorNode;
@end /* interface FULLNS0NodeConnector */

#endif /* DEF_FULLNS0NodeConnector_H */
#ifndef DEF_FULLNS0EdgeProperties_H
#define DEF_FULLNS0EdgeProperties_H

/**
 * (no documentation provided)
 */
@interface FULLNS0EdgeProperties : NSObject <EnunciateXML>
{
  @private
    FULLNS0Edge *_edge;
    NSArray *_properties;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Edge *) edge;

/**
 * (no documentation provided)
 */
- (void) setEdge: (FULLNS0Edge *) newEdge;

/**
 * (no documentation provided)
 */
- (NSArray *) properties;

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties;
@end /* interface FULLNS0EdgeProperties */

#endif /* DEF_FULLNS0EdgeProperties_H */
#ifndef DEF_FULLNS0Node_H
#define DEF_FULLNS0Node_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Node : NSObject <EnunciateXML>
{
  @private
    NSString *_nodeIDString;
    NSString *_type;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeIDString: (NSString *) newNodeIDString;

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;
@end /* interface FULLNS0Node */

#endif /* DEF_FULLNS0Node_H */
#ifndef DEF_FULLNS0Property_H
#define DEF_FULLNS0Property_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Property : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Property */

#endif /* DEF_FULLNS0Property_H */
#ifndef DEF_FULLNS0TopologyUserLinkConfig_H
#define DEF_FULLNS0TopologyUserLinkConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TopologyUserLinkConfig : NSObject <EnunciateXML>
{
  @private
    NSString *_status;
    NSString *_dstNodeConnector;
    NSString *_srcNodeConnector;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) status;

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus;

/**
 * (no documentation provided)
 */
- (NSString *) dstNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setDstNodeConnector: (NSString *) newDstNodeConnector;

/**
 * (no documentation provided)
 */
- (NSString *) srcNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setSrcNodeConnector: (NSString *) newSrcNodeConnector;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0TopologyUserLinkConfig */

#endif /* DEF_FULLNS0TopologyUserLinkConfig_H */
#ifndef DEF_FULLNS0TopologyUserLinks_H
#define DEF_FULLNS0TopologyUserLinks_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TopologyUserLinks : NSObject <EnunciateXML>
{
  @private
    NSArray *_userLinks;
}

/**
 * (no documentation provided)
 */
- (NSArray *) userLinks;

/**
 * (no documentation provided)
 */
- (void) setUserLinks: (NSArray *) newUserLinks;
@end /* interface FULLNS0TopologyUserLinks */

#endif /* DEF_FULLNS0TopologyUserLinks_H */
#ifndef DEF_FULLNS0Topology_H
#define DEF_FULLNS0Topology_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Topology : NSObject <EnunciateXML>
{
  @private
    NSArray *_edgeProperties;
}

/**
 * (no documentation provided)
 */
- (NSArray *) edgeProperties;

/**
 * (no documentation provided)
 */
- (void) setEdgeProperties: (NSArray *) newEdgeProperties;
@end /* interface FULLNS0Topology */

#endif /* DEF_FULLNS0Topology_H */
#ifndef DEF_FULLNS0Edge_H
#define DEF_FULLNS0Edge_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Edge : NSObject <EnunciateXML>
{
  @private
    FULLNS0NodeConnector *_tailNodeConnector;
    FULLNS0NodeConnector *_headNodeConnector;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) tailNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setTailNodeConnector: (FULLNS0NodeConnector *) newTailNodeConnector;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) headNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setHeadNodeConnector: (FULLNS0NodeConnector *) newHeadNodeConnector;
@end /* interface FULLNS0Edge */

#endif /* DEF_FULLNS0Edge_H */
#ifndef DEF_FULLNS0Bandwidth_H
#define DEF_FULLNS0Bandwidth_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Bandwidth : FULLNS0Property <EnunciateXML>
{
  @private
    long _bandwidthValue;
}

/**
 * (no documentation provided)
 */
- (long) bandwidthValue;

/**
 * (no documentation provided)
 */
- (void) setBandwidthValue: (long) newBandwidthValue;
@end /* interface FULLNS0Bandwidth */

#endif /* DEF_FULLNS0Bandwidth_H */
#ifndef DEF_FULLNS0Capabilities_H
#define DEF_FULLNS0Capabilities_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Capabilities : FULLNS0Property <EnunciateXML>
{
  @private
    int _capabilitiesValue;
}

/**
 * (no documentation provided)
 */
- (int) capabilitiesValue;

/**
 * (no documentation provided)
 */
- (void) setCapabilitiesValue: (int) newCapabilitiesValue;
@end /* interface FULLNS0Capabilities */

#endif /* DEF_FULLNS0Capabilities_H */
#ifndef DEF_FULLNS0State_H
#define DEF_FULLNS0State_H

/**
 * (no documentation provided)
 */
@interface FULLNS0State : FULLNS0Property <EnunciateXML>
{
  @private
    short _stateValue;
}

/**
 * (no documentation provided)
 */
- (short) stateValue;

/**
 * (no documentation provided)
 */
- (void) setStateValue: (short) newStateValue;
@end /* interface FULLNS0State */

#endif /* DEF_FULLNS0State_H */
#ifndef DEF_FULLNS0Tables_H
#define DEF_FULLNS0Tables_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Tables : FULLNS0Property <EnunciateXML>
{
  @private
    unsigned char _tablesValue;
}

/**
 * (no documentation provided)
 */
- (unsigned char) tablesValue;

/**
 * (no documentation provided)
 */
- (void) setTablesValue: (unsigned char) newTablesValue;
@end /* interface FULLNS0Tables */

#endif /* DEF_FULLNS0Tables_H */
#ifndef DEF_FULLNS0TimeStamp_H
#define DEF_FULLNS0TimeStamp_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TimeStamp : FULLNS0Property <EnunciateXML>
{
  @private
    long _timestamp;
    NSString *_timestampName;
}

/**
 * (no documentation provided)
 */
- (long) timestamp;

/**
 * (no documentation provided)
 */
- (void) setTimestamp: (long) newTimestamp;

/**
 * (no documentation provided)
 */
- (NSString *) timestampName;

/**
 * (no documentation provided)
 */
- (void) setTimestampName: (NSString *) newTimestampName;
@end /* interface FULLNS0TimeStamp */

#endif /* DEF_FULLNS0TimeStamp_H */
#ifndef DEF_FULLNS0Tier_H
#define DEF_FULLNS0Tier_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Tier : FULLNS0Property <EnunciateXML>
{
  @private
    int _tierValue;
}

/**
 * (no documentation provided)
 */
- (int) tierValue;

/**
 * (no documentation provided)
 */
- (void) setTierValue: (int) newTierValue;
@end /* interface FULLNS0Tier */

#endif /* DEF_FULLNS0Tier_H */
#ifndef DEF_FULLNS0MacAddress_H
#define DEF_FULLNS0MacAddress_H

/**
 * (no documentation provided)
 */
@interface FULLNS0MacAddress : FULLNS0Property <EnunciateXML>
{
  @private
    NSData *_address;
}

/**
 * (no documentation provided)
 */
- (NSData *) address;

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSData *) newAddress;
@end /* interface FULLNS0MacAddress */

#endif /* DEF_FULLNS0MacAddress_H */
#ifndef DEF_FULLNS0Name_H
#define DEF_FULLNS0Name_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Name : FULLNS0Property <EnunciateXML>
{
  @private
    NSString *_nameValue;
}

/**
 * (no documentation provided)
 */
- (NSString *) nameValue;

/**
 * (no documentation provided)
 */
- (void) setNameValue: (NSString *) newNameValue;
@end /* interface FULLNS0Name */

#endif /* DEF_FULLNS0Name_H */
#ifndef DEF_FULLNS0Latency_H
#define DEF_FULLNS0Latency_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Latency : FULLNS0Property <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Latency */

#endif /* DEF_FULLNS0Latency_H */
#ifndef DEF_FULLNS0Config_H
#define DEF_FULLNS0Config_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Config : FULLNS0Property <EnunciateXML>
{
  @private
    short _configValue;
}

/**
 * (no documentation provided)
 */
- (short) configValue;

/**
 * (no documentation provided)
 */
- (void) setConfigValue: (short) newConfigValue;
@end /* interface FULLNS0Config */

#endif /* DEF_FULLNS0Config_H */
#ifndef DEF_FULLNS0Buffers_H
#define DEF_FULLNS0Buffers_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Buffers : FULLNS0Property <EnunciateXML>
{
  @private
    int _buffersValue;
}

/**
 * (no documentation provided)
 */
- (int) buffersValue;

/**
 * (no documentation provided)
 */
- (void) setBuffersValue: (int) newBuffersValue;
@end /* interface FULLNS0Buffers */

#endif /* DEF_FULLNS0Buffers_H */
#ifndef DEF_FULLNS0Actions_H
#define DEF_FULLNS0Actions_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Actions : FULLNS0Property <EnunciateXML>
{
  @private
    int _actionsValue;
}

/**
 * (no documentation provided)
 */
- (int) actionsValue;

/**
 * (no documentation provided)
 */
- (void) setActionsValue: (int) newActionsValue;
@end /* interface FULLNS0Actions */

#endif /* DEF_FULLNS0Actions_H */
#ifndef DEF_FULLNS0SupportedBandwidth_H
#define DEF_FULLNS0SupportedBandwidth_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SupportedBandwidth : FULLNS0Bandwidth <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0SupportedBandwidth */

#endif /* DEF_FULLNS0SupportedBandwidth_H */
#ifndef DEF_FULLNS0PeerBandwidth_H
#define DEF_FULLNS0PeerBandwidth_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PeerBandwidth : FULLNS0Bandwidth <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0PeerBandwidth */

#endif /* DEF_FULLNS0PeerBandwidth_H */
#ifndef DEF_FULLNS0AdvertisedBandwidth_H
#define DEF_FULLNS0AdvertisedBandwidth_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AdvertisedBandwidth : FULLNS0Bandwidth <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0AdvertisedBandwidth */

#endif /* DEF_FULLNS0AdvertisedBandwidth_H */
