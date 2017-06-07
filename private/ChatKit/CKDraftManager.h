//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject
{
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_pendingRecipients;
- (void)_setPendingRecipients:(id)arg1;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (id)_draftForKey:(id)arg1;
- (id)_pendingRecipientsURL;
- (void)flushCache;
- (void)save:(_Bool)arg1;
- (void)clearDraftForPendingConversation;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;
- (id)draftForPendingConversationWithRecipients:(id *)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (id)draftForConversation:(id)arg1;
- (void)_clearDraftForConversation:(id)arg1;
- (void)dealloc;

@end

