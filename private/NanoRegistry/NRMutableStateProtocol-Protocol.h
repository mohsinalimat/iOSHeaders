//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRMutableStateObserverProtocol-Protocol.h>
#import <NanoRegistry/NRMutableStateParentProtocol-Protocol.h>
#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSObject-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@protocol NRDiffProtocol, NRMutableStateProtocol;

@protocol NRMutableStateProtocol <NSObject, NSSecureCoding, NSCopying, NRMutableStateObserverProtocol, NRMutableStateParentProtocol>
+ (id <NRDiffProtocol>)diffFrom:(id <NRMutableStateProtocol>)arg1 to:(id <NRMutableStateProtocol>)arg2;
- (id <NRDiffProtocol>)applyDiff:(id <NRDiffProtocol>)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (id <NRDiffProtocol>)applyDiff:(id <NRDiffProtocol>)arg1;
@end

