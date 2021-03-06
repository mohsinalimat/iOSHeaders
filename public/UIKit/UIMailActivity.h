//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/UIManagedConfigurationRestrictableActivity-Protocol.h>
#import <UIKit/UIStateRestoring-Protocol.h>

@class MFMailComposeViewController, NSString;
@protocol UIStateRestoring;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity>
{
    _Bool _sourceIsManaged;
    _Bool _keyboardVisible;
    _Bool _hasAnyAccount;
    _Bool _hasFilteredAccount;
    NSString *_sourceApplicationBundleID;
    NSString *_subject;
    NSString *_autosaveIdentifier;
    MFMailComposeViewController *_mailComposeViewController;
}

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@property(nonatomic) _Bool hasFilteredAccount; // @synthesize hasFilteredAccount=_hasFilteredAccount;
@property(nonatomic) _Bool hasAnyAccount; // @synthesize hasAnyAccount=_hasAnyAccount;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
@property(retain, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_cleanup;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)activityViewController;
- (void)_setMailSubject:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_restoreDraft;
- (id)_stateRestorationDraftIsAvailable;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (void)_saveDraft:(id)arg1;
- (id)_mailDraftRestorationURL;
- (id)activityTitle;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)activityType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end

