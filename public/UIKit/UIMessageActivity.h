//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/UIManagedConfigurationRestrictableActivity-Protocol.h>

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity>
{
    _Bool _sourceIsManaged;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1 hostApplicationBundleID:(id)arg2;
- (id)activityTitle;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)activityType;
- (void)dealloc;

@end
