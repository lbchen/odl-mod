#import "enunciate-common.h"

@class FULLNS0Node;
@class FULLNS0FlowConfig;
@class FULLNS0FlowConfigs;

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
#ifndef DEF_FULLNS0FlowConfig_H
#define DEF_FULLNS0FlowConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowConfig : NSObject <EnunciateXML>
{
  @private
    NSString *_etherType;
    NSString *_ingressPort;
    NSString *_tosBits;
    NSString *_dlSrc;
    NSString *_dlDst;
    NSString *_nwDst;
    NSString *_idleTimeout;
    NSString *_name;
    NSArray *_actions;
    NSString *_vlanPriority;
    NSString *_tpDst;
    NSString *_cookie;
    NSString *_priority;
    FULLNS0Node *_node;
    NSString *_hardTimeout;
    NSString *_nwSrc;
    NSString *_installInHw;
    NSString *_vlanId;
    NSString *_tpSrc;
    NSString *_protocol;
}

/**
 * (no documentation provided)
 */
- (NSString *) etherType;

/**
 * (no documentation provided)
 */
- (void) setEtherType: (NSString *) newEtherType;

/**
 * (no documentation provided)
 */
- (NSString *) ingressPort;

/**
 * (no documentation provided)
 */
- (void) setIngressPort: (NSString *) newIngressPort;

/**
 * (no documentation provided)
 */
- (NSString *) tosBits;

/**
 * (no documentation provided)
 */
- (void) setTosBits: (NSString *) newTosBits;

/**
 * (no documentation provided)
 */
- (NSString *) dlSrc;

/**
 * (no documentation provided)
 */
- (void) setDlSrc: (NSString *) newDlSrc;

/**
 * (no documentation provided)
 */
- (NSString *) dlDst;

/**
 * (no documentation provided)
 */
- (void) setDlDst: (NSString *) newDlDst;

/**
 * (no documentation provided)
 */
- (NSString *) nwDst;

/**
 * (no documentation provided)
 */
- (void) setNwDst: (NSString *) newNwDst;

/**
 * (no documentation provided)
 */
- (NSString *) idleTimeout;

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (NSString *) newIdleTimeout;

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
- (NSArray *) actions;

/**
 * (no documentation provided)
 */
- (void) setActions: (NSArray *) newActions;

/**
 * (no documentation provided)
 */
- (NSString *) vlanPriority;

/**
 * (no documentation provided)
 */
- (void) setVlanPriority: (NSString *) newVlanPriority;

/**
 * (no documentation provided)
 */
- (NSString *) tpDst;

/**
 * (no documentation provided)
 */
- (void) setTpDst: (NSString *) newTpDst;

/**
 * (no documentation provided)
 */
- (NSString *) cookie;

/**
 * (no documentation provided)
 */
- (void) setCookie: (NSString *) newCookie;

/**
 * (no documentation provided)
 */
- (NSString *) priority;

/**
 * (no documentation provided)
 */
- (void) setPriority: (NSString *) newPriority;

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node;

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode;

/**
 * (no documentation provided)
 */
- (NSString *) hardTimeout;

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (NSString *) newHardTimeout;

/**
 * (no documentation provided)
 */
- (NSString *) nwSrc;

/**
 * (no documentation provided)
 */
- (void) setNwSrc: (NSString *) newNwSrc;

/**
 * (no documentation provided)
 */
- (NSString *) installInHw;

/**
 * (no documentation provided)
 */
- (void) setInstallInHw: (NSString *) newInstallInHw;

/**
 * (no documentation provided)
 */
- (NSString *) vlanId;

/**
 * (no documentation provided)
 */
- (void) setVlanId: (NSString *) newVlanId;

/**
 * (no documentation provided)
 */
- (NSString *) tpSrc;

/**
 * (no documentation provided)
 */
- (void) setTpSrc: (NSString *) newTpSrc;

/**
 * (no documentation provided)
 */
- (NSString *) protocol;

/**
 * (no documentation provided)
 */
- (void) setProtocol: (NSString *) newProtocol;
@end /* interface FULLNS0FlowConfig */

#endif /* DEF_FULLNS0FlowConfig_H */
#ifndef DEF_FULLNS0FlowConfigs_H
#define DEF_FULLNS0FlowConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_flowConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowConfig;

/**
 * (no documentation provided)
 */
- (void) setFlowConfig: (NSArray *) newFlowConfig;
@end /* interface FULLNS0FlowConfigs */

#endif /* DEF_FULLNS0FlowConfigs_H */
