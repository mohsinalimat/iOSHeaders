//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class CNAvatarView, CNContact, NSArray, NSMutableArray, NSString, UIViewController;

@protocol CNAvatarViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarView:(CNAvatarView *)arg1;

@optional
- (void)didDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (_Bool)avatarView:(CNAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (void)avatarView:(CNAvatarView *)arg1 willShowActions:(NSMutableArray *)arg2;
- (NSArray *)avatarView:(CNAvatarView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (_Bool)shouldShowActionsForAvatarView:(CNAvatarView *)arg1;
@end

