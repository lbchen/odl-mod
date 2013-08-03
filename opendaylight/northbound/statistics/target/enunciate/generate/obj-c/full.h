#import "enunciate-common.h"

@class FULLNS0NodeConnector;
@class FULLNS0Node;
@class FULLNS0MatchField;
@class FULLNS0Match;
@class FULLNS0Flow;
@class FULLNS0NodeTable;
@class FULLNS0NodeTableStatistics;
@class FULLNS0FlowStatistics;
@class FULLNS0TableStatistics;
@class FULLNS0PortStatistics;
@class FULLNS0AllTableStatistics;
@class FULLNS0AllPortStatistics;
@class FULLNS0AllFlowStatistics;
@class FULLNS0NodeConnectorStatistics;
@class FULLNS0FlowOnNode;
@class FULLNS0Action;
@class FULLNS0FloodAll;
@class FULLNS0Loopback;
@class FULLNS0PopVlan;
@class FULLNS0SetDlDst;
@class FULLNS0SetDlType;
@class FULLNS0SetNwSrc;
@class FULLNS0SetTpDst;
@class FULLNS0SetVlanCfi;
@class FULLNS0SetVlanPcp;
@class FULLNS0SwPath;
@class FULLNS0SetVlanId;
@class FULLNS0SetTpSrc;
@class FULLNS0SetNwTos;
@class FULLNS0SetNwDst;
@class FULLNS0SetDlSrc;
@class FULLNS0PushVlan;
@class FULLNS0Output;
@class FULLNS0HwPath;
@class FULLNS0Flood;
@class FULLNS0Drop;
@class FULLNS0Controller;

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
#ifndef DEF_FULLNS0MatchField_H
#define DEF_FULLNS0MatchField_H

/**
 * (no documentation provided)
 */
@interface FULLNS0MatchField : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0MatchField */

#endif /* DEF_FULLNS0MatchField_H */
#ifndef DEF_FULLNS0Match_H
#define DEF_FULLNS0Match_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Match : NSObject <EnunciateXML>
{
  @private
    NSArray *_matchFields;
}

/**
 * (no documentation provided)
 */
- (NSArray *) matchFields;

/**
 * (no documentation provided)
 */
- (void) setMatchFields: (NSArray *) newMatchFields;
@end /* interface FULLNS0Match */

#endif /* DEF_FULLNS0Match_H */
#ifndef DEF_FULLNS0Flow_H
#define DEF_FULLNS0Flow_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Flow : NSObject <EnunciateXML>
{
  @private
    short _priority;
    short _idleTimeout;
    NSArray *_actions;
    short _hardTimeout;
    long _identifier;
    FULLNS0Match *_match;
}

/**
 * (no documentation provided)
 */
- (short) priority;

/**
 * (no documentation provided)
 */
- (void) setPriority: (short) newPriority;

/**
 * (no documentation provided)
 */
- (short) idleTimeout;

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (short) newIdleTimeout;

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
- (short) hardTimeout;

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (short) newHardTimeout;

/**
 * (no documentation provided)
 */
- (long) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier;

/**
 * (no documentation provided)
 */
- (FULLNS0Match *) match;

/**
 * (no documentation provided)
 */
- (void) setMatch: (FULLNS0Match *) newMatch;
@end /* interface FULLNS0Flow */

#endif /* DEF_FULLNS0Flow_H */
#ifndef DEF_FULLNS0NodeTable_H
#define DEF_FULLNS0NodeTable_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeTable : NSObject <EnunciateXML>
{
  @private
    NSString *_nodeTableIDString;
    FULLNS0Node *_nodeTableNode;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeTableIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeTableIDString: (NSString *) newNodeTableIDString;

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeTableNode;

/**
 * (no documentation provided)
 */
- (void) setNodeTableNode: (FULLNS0Node *) newNodeTableNode;
@end /* interface FULLNS0NodeTable */

#endif /* DEF_FULLNS0NodeTable_H */
#ifndef DEF_FULLNS0NodeTableStatistics_H
#define DEF_FULLNS0NodeTableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeTableStatistics : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    long _matchedCount;
    FULLNS0NodeTable *_nodeTable;
    int _activeCount;
    long _lookupCount;
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
- (long) matchedCount;

/**
 * (no documentation provided)
 */
- (void) setMatchedCount: (long) newMatchedCount;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeTable *) nodeTable;

/**
 * (no documentation provided)
 */
- (void) setNodeTable: (FULLNS0NodeTable *) newNodeTable;

/**
 * (no documentation provided)
 */
- (int) activeCount;

/**
 * (no documentation provided)
 */
- (void) setActiveCount: (int) newActiveCount;

/**
 * (no documentation provided)
 */
- (long) lookupCount;

/**
 * (no documentation provided)
 */
- (void) setLookupCount: (long) newLookupCount;
@end /* interface FULLNS0NodeTableStatistics */

#endif /* DEF_FULLNS0NodeTableStatistics_H */
#ifndef DEF_FULLNS0FlowStatistics_H
#define DEF_FULLNS0FlowStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_flowStat;
}

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
- (NSArray *) flowStat;

/**
 * (no documentation provided)
 */
- (void) setFlowStat: (NSArray *) newFlowStat;
@end /* interface FULLNS0FlowStatistics */

#endif /* DEF_FULLNS0FlowStatistics_H */
#ifndef DEF_FULLNS0TableStatistics_H
#define DEF_FULLNS0TableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TableStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_tableStats;
}

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
- (NSArray *) tableStats;

/**
 * (no documentation provided)
 */
- (void) setTableStats: (NSArray *) newTableStats;
@end /* interface FULLNS0TableStatistics */

#endif /* DEF_FULLNS0TableStatistics_H */
#ifndef DEF_FULLNS0PortStatistics_H
#define DEF_FULLNS0PortStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PortStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_portStats;
}

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
- (NSArray *) portStats;

/**
 * (no documentation provided)
 */
- (void) setPortStats: (NSArray *) newPortStats;
@end /* interface FULLNS0PortStatistics */

#endif /* DEF_FULLNS0PortStatistics_H */
#ifndef DEF_FULLNS0AllTableStatistics_H
#define DEF_FULLNS0AllTableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllTableStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_tableStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) tableStatistics;

/**
 * (no documentation provided)
 */
- (void) setTableStatistics: (NSArray *) newTableStatistics;
@end /* interface FULLNS0AllTableStatistics */

#endif /* DEF_FULLNS0AllTableStatistics_H */
#ifndef DEF_FULLNS0AllPortStatistics_H
#define DEF_FULLNS0AllPortStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllPortStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_portStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) portStatistics;

/**
 * (no documentation provided)
 */
- (void) setPortStatistics: (NSArray *) newPortStatistics;
@end /* interface FULLNS0AllPortStatistics */

#endif /* DEF_FULLNS0AllPortStatistics_H */
#ifndef DEF_FULLNS0AllFlowStatistics_H
#define DEF_FULLNS0AllFlowStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllFlowStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_flowStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowStatistics;

/**
 * (no documentation provided)
 */
- (void) setFlowStatistics: (NSArray *) newFlowStatistics;
@end /* interface FULLNS0AllFlowStatistics */

#endif /* DEF_FULLNS0AllFlowStatistics_H */
#ifndef DEF_FULLNS0NodeConnectorStatistics_H
#define DEF_FULLNS0NodeConnectorStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnectorStatistics : NSObject <EnunciateXML>
{
  @private
    long _receiveOverRunError;
    long _transmitErrors;
    FULLNS0NodeConnector *_nodeConnector;
    long _receiveFrameError;
    long _transmitPackets;
    long _receiveBytes;
    long _receiveCrcError;
    long _collisionCount;
    long _receiveDrops;
    long _transmitBytes;
    long _transmitDrops;
    long _receiveErrors;
    long _receivePackets;
}

/**
 * (no documentation provided)
 */
- (long) receiveOverRunError;

/**
 * (no documentation provided)
 */
- (void) setReceiveOverRunError: (long) newReceiveOverRunError;

/**
 * (no documentation provided)
 */
- (long) transmitErrors;

/**
 * (no documentation provided)
 */
- (void) setTransmitErrors: (long) newTransmitErrors;

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
- (long) receiveFrameError;

/**
 * (no documentation provided)
 */
- (void) setReceiveFrameError: (long) newReceiveFrameError;

/**
 * (no documentation provided)
 */
- (long) transmitPackets;

/**
 * (no documentation provided)
 */
- (void) setTransmitPackets: (long) newTransmitPackets;

/**
 * (no documentation provided)
 */
- (long) receiveBytes;

/**
 * (no documentation provided)
 */
- (void) setReceiveBytes: (long) newReceiveBytes;

/**
 * (no documentation provided)
 */
- (long) receiveCrcError;

/**
 * (no documentation provided)
 */
- (void) setReceiveCrcError: (long) newReceiveCrcError;

/**
 * (no documentation provided)
 */
- (long) collisionCount;

/**
 * (no documentation provided)
 */
- (void) setCollisionCount: (long) newCollisionCount;

/**
 * (no documentation provided)
 */
- (long) receiveDrops;

/**
 * (no documentation provided)
 */
- (void) setReceiveDrops: (long) newReceiveDrops;

/**
 * (no documentation provided)
 */
- (long) transmitBytes;

/**
 * (no documentation provided)
 */
- (void) setTransmitBytes: (long) newTransmitBytes;

/**
 * (no documentation provided)
 */
- (long) transmitDrops;

/**
 * (no documentation provided)
 */
- (void) setTransmitDrops: (long) newTransmitDrops;

/**
 * (no documentation provided)
 */
- (long) receiveErrors;

/**
 * (no documentation provided)
 */
- (void) setReceiveErrors: (long) newReceiveErrors;

/**
 * (no documentation provided)
 */
- (long) receivePackets;

/**
 * (no documentation provided)
 */
- (void) setReceivePackets: (long) newReceivePackets;
@end /* interface FULLNS0NodeConnectorStatistics */

#endif /* DEF_FULLNS0NodeConnectorStatistics_H */
#ifndef DEF_FULLNS0FlowOnNode_H
#define DEF_FULLNS0FlowOnNode_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowOnNode : NSObject <EnunciateXML>
{
  @private
    FULLNS0Flow *_flow;
    long _packetCount;
    int _durationNanoseconds;
    long _byteCount;
    unsigned char _tableId;
    int _durationSeconds;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Flow *) flow;

/**
 * (no documentation provided)
 */
- (void) setFlow: (FULLNS0Flow *) newFlow;

/**
 * (no documentation provided)
 */
- (long) packetCount;

/**
 * (no documentation provided)
 */
- (void) setPacketCount: (long) newPacketCount;

/**
 * (no documentation provided)
 */
- (int) durationNanoseconds;

/**
 * (no documentation provided)
 */
- (void) setDurationNanoseconds: (int) newDurationNanoseconds;

/**
 * (no documentation provided)
 */
- (long) byteCount;

/**
 * (no documentation provided)
 */
- (void) setByteCount: (long) newByteCount;

/**
 * (no documentation provided)
 */
- (unsigned char) tableId;

/**
 * (no documentation provided)
 */
- (void) setTableId: (unsigned char) newTableId;

/**
 * (no documentation provided)
 */
- (int) durationSeconds;

/**
 * (no documentation provided)
 */
- (void) setDurationSeconds: (int) newDurationSeconds;
@end /* interface FULLNS0FlowOnNode */

#endif /* DEF_FULLNS0FlowOnNode_H */
#ifndef DEF_FULLNS0Action_H
#define DEF_FULLNS0Action_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Action : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Action */

#endif /* DEF_FULLNS0Action_H */
#ifndef DEF_FULLNS0FloodAll_H
#define DEF_FULLNS0FloodAll_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FloodAll : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0FloodAll */

#endif /* DEF_FULLNS0FloodAll_H */
#ifndef DEF_FULLNS0Loopback_H
#define DEF_FULLNS0Loopback_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Loopback : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Loopback */

#endif /* DEF_FULLNS0Loopback_H */
#ifndef DEF_FULLNS0PopVlan_H
#define DEF_FULLNS0PopVlan_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PopVlan : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0PopVlan */

#endif /* DEF_FULLNS0PopVlan_H */
#ifndef DEF_FULLNS0SetDlDst_H
#define DEF_FULLNS0SetDlDst_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetDlDst : FULLNS0Action <EnunciateXML>
{
  @private
    NSString *_dlAddressString;
}

/**
 * (no documentation provided)
 */
- (NSString *) dlAddressString;

/**
 * (no documentation provided)
 */
- (void) setDlAddressString: (NSString *) newDlAddressString;
@end /* interface FULLNS0SetDlDst */

#endif /* DEF_FULLNS0SetDlDst_H */
#ifndef DEF_FULLNS0SetDlType_H
#define DEF_FULLNS0SetDlType_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetDlType : FULLNS0Action <EnunciateXML>
{
  @private
    int _dlType;
}

/**
 * (no documentation provided)
 */
- (int) dlType;

/**
 * (no documentation provided)
 */
- (void) setDlType: (int) newDlType;
@end /* interface FULLNS0SetDlType */

#endif /* DEF_FULLNS0SetDlType_H */
#ifndef DEF_FULLNS0SetNwSrc_H
#define DEF_FULLNS0SetNwSrc_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetNwSrc : FULLNS0Action <EnunciateXML>
{
  @private
    NSString *_addressAsString;
}

/**
 * (no documentation provided)
 */
- (NSString *) addressAsString;

/**
 * (no documentation provided)
 */
- (void) setAddressAsString: (NSString *) newAddressAsString;
@end /* interface FULLNS0SetNwSrc */

#endif /* DEF_FULLNS0SetNwSrc_H */
#ifndef DEF_FULLNS0SetTpDst_H
#define DEF_FULLNS0SetTpDst_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetTpDst : FULLNS0Action <EnunciateXML>
{
  @private
    int _port;
}

/**
 * (no documentation provided)
 */
- (int) port;

/**
 * (no documentation provided)
 */
- (void) setPort: (int) newPort;
@end /* interface FULLNS0SetTpDst */

#endif /* DEF_FULLNS0SetTpDst_H */
#ifndef DEF_FULLNS0SetVlanCfi_H
#define DEF_FULLNS0SetVlanCfi_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetVlanCfi : FULLNS0Action <EnunciateXML>
{
  @private
    int _cfi;
}

/**
 * (no documentation provided)
 */
- (int) cfi;

/**
 * (no documentation provided)
 */
- (void) setCfi: (int) newCfi;
@end /* interface FULLNS0SetVlanCfi */

#endif /* DEF_FULLNS0SetVlanCfi_H */
#ifndef DEF_FULLNS0SetVlanPcp_H
#define DEF_FULLNS0SetVlanPcp_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetVlanPcp : FULLNS0Action <EnunciateXML>
{
  @private
    int _pcp;
}

/**
 * (no documentation provided)
 */
- (int) pcp;

/**
 * (no documentation provided)
 */
- (void) setPcp: (int) newPcp;
@end /* interface FULLNS0SetVlanPcp */

#endif /* DEF_FULLNS0SetVlanPcp_H */
#ifndef DEF_FULLNS0SwPath_H
#define DEF_FULLNS0SwPath_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SwPath : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0SwPath */

#endif /* DEF_FULLNS0SwPath_H */
#ifndef DEF_FULLNS0SetVlanId_H
#define DEF_FULLNS0SetVlanId_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetVlanId : FULLNS0Action <EnunciateXML>
{
  @private
    int _vlanId;
}

/**
 * (no documentation provided)
 */
- (int) vlanId;

/**
 * (no documentation provided)
 */
- (void) setVlanId: (int) newVlanId;
@end /* interface FULLNS0SetVlanId */

#endif /* DEF_FULLNS0SetVlanId_H */
#ifndef DEF_FULLNS0SetTpSrc_H
#define DEF_FULLNS0SetTpSrc_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetTpSrc : FULLNS0Action <EnunciateXML>
{
  @private
    int _port;
}

/**
 * (no documentation provided)
 */
- (int) port;

/**
 * (no documentation provided)
 */
- (void) setPort: (int) newPort;
@end /* interface FULLNS0SetTpSrc */

#endif /* DEF_FULLNS0SetTpSrc_H */
#ifndef DEF_FULLNS0SetNwTos_H
#define DEF_FULLNS0SetNwTos_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetNwTos : FULLNS0Action <EnunciateXML>
{
  @private
    int _tos;
}

/**
 * (no documentation provided)
 */
- (int) tos;

/**
 * (no documentation provided)
 */
- (void) setTos: (int) newTos;
@end /* interface FULLNS0SetNwTos */

#endif /* DEF_FULLNS0SetNwTos_H */
#ifndef DEF_FULLNS0SetNwDst_H
#define DEF_FULLNS0SetNwDst_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetNwDst : FULLNS0Action <EnunciateXML>
{
  @private
    NSString *_addressAsString;
}

/**
 * (no documentation provided)
 */
- (NSString *) addressAsString;

/**
 * (no documentation provided)
 */
- (void) setAddressAsString: (NSString *) newAddressAsString;
@end /* interface FULLNS0SetNwDst */

#endif /* DEF_FULLNS0SetNwDst_H */
#ifndef DEF_FULLNS0SetDlSrc_H
#define DEF_FULLNS0SetDlSrc_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SetDlSrc : FULLNS0Action <EnunciateXML>
{
  @private
    NSString *_dlAddressString;
}

/**
 * (no documentation provided)
 */
- (NSString *) dlAddressString;

/**
 * (no documentation provided)
 */
- (void) setDlAddressString: (NSString *) newDlAddressString;
@end /* interface FULLNS0SetDlSrc */

#endif /* DEF_FULLNS0SetDlSrc_H */
#ifndef DEF_FULLNS0PushVlan_H
#define DEF_FULLNS0PushVlan_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PushVlan : FULLNS0Action <EnunciateXML>
{
  @private
    int _header;
}

/**
 * (no documentation provided)
 */
- (int) header;

/**
 * (no documentation provided)
 */
- (void) setHeader: (int) newHeader;
@end /* interface FULLNS0PushVlan */

#endif /* DEF_FULLNS0PushVlan_H */
#ifndef DEF_FULLNS0Output_H
#define DEF_FULLNS0Output_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Output : FULLNS0Action <EnunciateXML>
{
  @private
    FULLNS0NodeConnector *_port;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) port;

/**
 * (no documentation provided)
 */
- (void) setPort: (FULLNS0NodeConnector *) newPort;
@end /* interface FULLNS0Output */

#endif /* DEF_FULLNS0Output_H */
#ifndef DEF_FULLNS0HwPath_H
#define DEF_FULLNS0HwPath_H

/**
 * (no documentation provided)
 */
@interface FULLNS0HwPath : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0HwPath */

#endif /* DEF_FULLNS0HwPath_H */
#ifndef DEF_FULLNS0Flood_H
#define DEF_FULLNS0Flood_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Flood : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Flood */

#endif /* DEF_FULLNS0Flood_H */
#ifndef DEF_FULLNS0Drop_H
#define DEF_FULLNS0Drop_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Drop : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Drop */

#endif /* DEF_FULLNS0Drop_H */
#ifndef DEF_FULLNS0Controller_H
#define DEF_FULLNS0Controller_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Controller : FULLNS0Action <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Controller */

#endif /* DEF_FULLNS0Controller_H */
