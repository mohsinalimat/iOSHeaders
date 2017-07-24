//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPAccessoryServerBrowser, NSArray, NSData, NSError, NSNumber, NSString;

@protocol HAPAccessoryServerBrowserDelegate <NSObject>
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateValuesForCharacteristics:(NSArray *)arg3 stateNumber:(NSNumber *)arg4 broadcast:(_Bool)arg5;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 removeCacheForAccessoryWithIdentifier:(NSString *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 getCacheForAccessoryWithIdentifier:(NSString *)arg2 withCompletion:(void (^)(NSData *))arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 saveCache:(NSData *)arg2 serverIdentifier:(NSString *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didChangeReachability:(_Bool)arg2 forAccessoryServerWithIdentifier:(NSString *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(NSString *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStopDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFindAccessoryServer:(HAPAccessoryServer *)arg2 stateChanged:(_Bool)arg3 stateNumber:(NSNumber *)arg4;
@end

