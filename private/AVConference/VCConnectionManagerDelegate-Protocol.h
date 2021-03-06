//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCConnectionProtocol;

@protocol VCConnectionManagerDelegate <NSObject>
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2;

@optional
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
@end

