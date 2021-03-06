//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSUUID;

@protocol UABestAppSuggestionManagerProtocol <NSObject>
- (void)doLaunchFollowUp:(NSUUID *)arg1 interactionType:(unsigned long long)arg2 cancelled:(_Bool)arg3;
- (void)doQueueFetchOfPayloadForBestAppSuggestion:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doUnregisterForBestAppChangeNotification;
- (void)doRegisterForBestAppChangeNotification;
- (void)doRemoveBestAppSuggestion:(NSUUID *)arg1 options:(NSDictionary *)arg2;
- (void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)doDetermineBestAppSuggestionWithCompletionHandler:(void (^)(NSUUID *, unsigned long long, NSString *, NSString *, NSDate *, double, NSString *, NSString *, NSString *))arg1;
- (void)doStartBestAppSuggestion:(double)arg1;
- (void)doConnected;
@end

