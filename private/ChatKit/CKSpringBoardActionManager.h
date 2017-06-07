//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKContactsSearchManagerDelegate-Protocol.h>

@class CKContactsSearchManager, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>
{
    CKContactsSearchManager *_contactsSearchManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CKContactsSearchManager *contactsSearchManager; // @synthesize contactsSearchManager=_contactsSearchManager;
- (void).cxx_destruct;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)updateShortcutItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

