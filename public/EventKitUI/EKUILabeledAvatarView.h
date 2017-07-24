//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAvatarView, CNContact, UILabel, UIViewController;

@interface EKUILabeledAvatarView : UIView
{
    UILabel *_label;
    UIViewController *_viewController;
    CNAvatarView *_avatar;
    unsigned long long _labelPlacement;
    unsigned long long _options;
}

+ (id)sortedAvatarListFromParticipants:(id)arg1;
+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)_createAvatarView;
@property unsigned long long options; // @synthesize options=_options;
@property unsigned long long labelPlacement; // @synthesize labelPlacement=_labelPlacement;
@property(retain) CNAvatarView *avatar; // @synthesize avatar=_avatar;
@property __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithParticpant:(id)arg1;
- (void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateLabel;
@property(retain) CNContact *contact;
- (void)setup;
- (void)didTap;
- (void)setUpTap;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

