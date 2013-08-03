#import "enunciate-common.h"

@class FULLNS0Host;
@class FULLNS0NodeConnector;
@class FULLNS0DataLinkAddress;
@class FULLNS0Node;
@class FULLNS0Hosts;
@class FULLNS0EthernetAddress;
@class FULLNS0HostNodeConnector;

#ifndef DEF_FULLNS0Host_H
#define DEF_FULLNS0Host_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Host : NSObject <EnunciateXML>
{
  @private
    NSString *_networkAddressAsString;
    FULLNS0DataLinkAddress *_dataLayerAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkAddressAsString;

/**
 * (no documentation provided)
 */
- (void) setNetworkAddressAsString: (NSString *) newNetworkAddressAsString;

/**
 * (no documentation provided)
 */
- (FULLNS0DataLinkAddress *) dataLayerAddress;

/**
 * (no documentation provided)
 */
- (void) setDataLayerAddress: (FULLNS0DataLinkAddress *) newDataLayerAddress;
@end /* interface FULLNS0Host */

#endif /* DEF_FULLNS0Host_H */
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
#ifndef DEF_FULLNS0DataLinkAddress_H
#define DEF_FULLNS0DataLinkAddress_H

/**
 * (no documentation provided)
 */
@interface FULLNS0DataLinkAddress : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0DataLinkAddress */

#endif /* DEF_FULLNS0DataLinkAddress_H */
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
#ifndef DEF_FULLNS0Hosts_H
#define DEF_FULLNS0Hosts_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Hosts : NSObject <EnunciateXML>
{
  @private
    NSArray *_hostNodeConnector;
}

/**
 * (no documentation provided)
 */
- (NSArray *) hostNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setHostNodeConnector: (NSArray *) newHostNodeConnector;
@end /* interface FULLNS0Hosts */

#endif /* DEF_FULLNS0Hosts_H */
#ifndef DEF_FULLNS0EthernetAddress_H
#define DEF_FULLNS0EthernetAddress_H

/**
 * (no documentation provided)
 */
@interface FULLNS0EthernetAddress : FULLNS0DataLinkAddress <EnunciateXML>
{
  @private
    NSString *_macAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) macAddress;

/**
 * (no documentation provided)
 */
- (void) setMacAddress: (NSString *) newMacAddress;
@end /* interface FULLNS0EthernetAddress */

#endif /* DEF_FULLNS0EthernetAddress_H */
#ifndef DEF_FULLNS0HostNodeConnector_H
#define DEF_FULLNS0HostNodeConnector_H

/**
 * (no documentation provided)
 */
@interface FULLNS0HostNodeConnector : FULLNS0Host <EnunciateXML>
{
  @private
    short _vlan;
    FULLNS0NodeConnector *_nodeConnector;
    BOOL _staticHost;
}

/**
 * (no documentation provided)
 */
- (short) vlan;

/**
 * (no documentation provided)
 */
- (void) setVlan: (short) newVlan;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeConnector;

/**
 * (no documentation provided)
 */
- (void) setNodeConnector: (FULLNS0NodeConnector *) newNodeConnector;

/**
 * (no documentation provided)
 */
- (BOOL) staticHost;

/**
 * (no documentation provided)
 */
- (void) setStaticHost: (BOOL) newStaticHost;
@end /* interface FULLNS0HostNodeConnector */

#endif /* DEF_FULLNS0HostNodeConnector_H */
