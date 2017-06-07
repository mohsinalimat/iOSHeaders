//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *, NSArray *))arg3;
@end

