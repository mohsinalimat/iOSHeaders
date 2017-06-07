//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCConnectionManager.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS : VCConnectionManager
{
    NSMutableArray *_connectionArray;
    unsigned int _lastTimestampForRemoteSendingFromNonPrimary;
    unsigned int _lastTimestampPreferredRemoteInterfaceUpdated;
}

- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;
- (_Bool)addConnectionToConnectionArray:(id)arg1;
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)updateConnectionForDuplication;
- (id)getConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)updateCellularMTU:(int)arg1;
- (id)getSecondaryConnectionToBeCompared;
- (id)getPrimaryConnectionToBeCompared;
- (int)removeConnection:(id)arg1;
- (void)handleSecondaryConnectionRemoved;
- (void)handlePrimaryConnectionRemoved;
- (int)addConnection:(id)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)dealloc;
- (id)init;

@end

